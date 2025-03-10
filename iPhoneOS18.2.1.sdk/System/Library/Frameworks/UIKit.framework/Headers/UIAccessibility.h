#if (defined(USE_UIKIT_PUBLIC_HEADERS) && USE_UIKIT_PUBLIC_HEADERS) || !__has_include(<UIKitCore/UIAccessibility.h>)

//
//  UIAccessibility.h
//  UIKit
//
//  Copyright (c) 2008-2018 Apple Inc. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIBezierPath.h>

#import <UIKit/UIAccessibilityAdditions.h>
#import <UIKit/UIAccessibilityConstants.h>
#import <UIKit/UIAccessibilityContainer.h>
#import <UIKit/UIAccessibilityCustomAction.h>
#import <UIKit/UIAccessibilityCustomRotor.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityIdentification.h>
#import <UIKit/UIAccessibilityZoom.h>
#import <UIKit/UIGuidedAccess.h>
#import <UIKit/UIAccessibilityLocationDescriptor.h>

NS_HEADER_AUDIT_BEGIN(nullability, sendability)

/*
 UIAccessibility
 
 UIAccessibility is implemented on all standard UIKit views and controls so
 that assistive applications can present them to users with disabilities.
 
 Custom items in a user interface should override aspects of UIAccessibility
 to supply details where the default value is incomplete.
 
 For example, a UIImageView subclass may need to override accessibilityLabel,
 but it does not need to override accessibilityFrame.
 
 A completely custom subclass of UIView might need to override all of the
 UIAccessibility methods except accessibilityFrame.
 */

@interface NSObject (UIAccessibility)

/*
 Return YES if the receiver should be exposed as an accessibility element. 
 default == NO
 default on UIKit controls == YES 
 Setting the property to YES will cause the receiver to be visible to assistive applications. 
 */
@property (nonatomic) BOOL isAccessibilityElement API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns the localized label that represents the element. 
 If the element does not display text (an icon for example), this method
 should return text that best labels the element. For example: "Play" could be used for
 a button that is used to play music. "Play button" should not be used, since there is a trait
 that identifies the control is a button.
 default == nil
 default on UIKit controls == derived from the title
 Setting the property will change the label that is returned to the accessibility client. 
 */
@property (nullable, nonatomic, copy) NSString *accessibilityLabel API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 The underlying attributed version of the accessibility label. Setting this property will change the
 value of the accessibilityLabel property and vice-versa.
 */
@property (nullable, nonatomic, copy) NSAttributedString *accessibilityAttributedLabel API_AVAILABLE(ios(11.0), tvos(11.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns a localized string that describes the result of performing an action on the element, when the result is non-obvious.
 The hint should be a brief phrase.
 For example: "Purchases the item." or "Downloads the attachment."
 default == nil
 Setting the property will change the hint that is returned to the accessibility client. 
 */
@property (nullable, nonatomic, copy) NSString *accessibilityHint API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 The underlying attributed version of the accessibility hint. Setting this property will change the
 value of the accessibilityHint property and vice-versa.
 */
@property (nullable, nonatomic, copy) NSAttributedString *accessibilityAttributedHint API_AVAILABLE(ios(11.0), tvos(11.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns a localized string that represents the value of the element, such as the value 
 of a slider or the text in a text field. Use only when the label of the element
 differs from a value. For example: A volume slider has a label of "Volume", but a value of "60%".
 default == nil
 default on UIKit controls == values for appropriate controls 
 Setting the property will change the value that is returned to the accessibility client.  
 */
@property (nullable, nonatomic, copy) NSString *accessibilityValue API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 The underlying attributed version of the accessibility value. Setting this property will change the
 value of the accessibilityValue property and vice-versa.
 */
@property (nullable, nonatomic, copy) NSAttributedString *accessibilityAttributedValue API_AVAILABLE(ios(11.0), tvos(11.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns a UIAccessibilityTraits mask that is the OR combination of
 all accessibility traits that best characterize the element.
 See UIAccessibilityConstants.h for a list of traits.
 When overriding this method, remember to combine your custom traits
 with [super accessibilityTraits].
 default == UIAccessibilityTraitNone
 default on UIKit controls == traits that best characterize individual controls. 
 Setting the property will change the traits that are returned to the accessibility client. 
 */
@property (nonatomic) UIAccessibilityTraits accessibilityTraits API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns the frame of the element in screen coordinates.
 default == CGRectZero
 default on UIViews == the frame of the view
 Setting the property will change the frame that is returned to the accessibility client. 
 */
@property (nonatomic) CGRect accessibilityFrame API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// The accessibilityFrame is expected to be in screen coordinates.
// To help convert the frame to screen coordinates, use the following method.
// The rect should exist in the view space of the UIView argument.
UIKIT_EXTERN CGRect UIAccessibilityConvertFrameToScreenCoordinates(CGRect rect, UIView *view) API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns the path of the element in screen coordinates.
 default == nil
 Setting the property, or overriding the method, will cause the assistive technology to prefer the path over the accessibility.
 frame when highlighting the element.
 */
@property (nullable, nonatomic, copy) UIBezierPath *accessibilityPath API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// The accessibilityPath is expected to be in screen coordinates.
// To help convert the path to screen coordinates, use the following method.
// The path should exist in the view space of the UIView argument.
UIKIT_EXTERN UIBezierPath *UIAccessibilityConvertPathToScreenCoordinates(UIBezierPath *path, UIView *view) API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns the activation point for an accessible element in screen coordinates.
 default == Mid-point of the accessibilityFrame.
 */
@property (nonatomic) CGPoint accessibilityActivationPoint API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns the language code that the element's label, value and hint should be spoken in. 
 If no language is set, the user's language is used.
 The format for the language code should follow Internet BCP 47 for language tags.
 For example, en-US specifies U.S. English.
 default == nil
 */
@property (nullable, nonatomic, strong) NSString *accessibilityLanguage API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Marks all the accessible elements contained within as hidden.
 default == NO
 */
@property (nonatomic) BOOL accessibilityElementsHidden API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Informs whether the receiving view should be considered modal by accessibility. If YES, then 
 elements outside this view will be ignored. Only elements inside this view will be exposed.
 default == NO
 */
@property (nonatomic) BOOL accessibilityViewIsModal API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Forces children elements to be grouped together regardless of their position on screen.
 For example, your app may show items that are meant to be grouped together in vertical columns. 
 By default, VoiceOver will navigate those items in horizontal rows. If shouldGroupAccessibilityChildren is set on
 a parent view of the items in the vertical column, VoiceOver will navigate the order correctly.
 default == NO
 */
@property (nonatomic) BOOL shouldGroupAccessibilityChildren API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Some assistive technologies allow the user to select a parent view or container to navigate its elements.
 This property allows an app to specify whether that behavior should apply to the receiver.
 Currently, this property only affects Switch Control, not VoiceOver or other assistive technologies.
 See UIAccessibilityConstants.h for the list of supported values.
 default == UIAccessibilityNavigationStyleAutomatic
 */
@property (nonatomic) UIAccessibilityNavigationStyle accessibilityNavigationStyle API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns whether the element performs an action based on user interaction.
 For example, a button that causes UI to update when it is tapped should return YES.
 A label whose only purpose is to display information should return NO.
 default == derived from other accessibility properties (for example, an element with UIAccessibilityTraitNotEnabled returns NO)
 */
@property (nonatomic) BOOL accessibilityRespondsToUserInteraction API_AVAILABLE(ios(13.0),tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns the localized label(s) that should be provided by the user to refer to this element.
 Use this property when the accessibilityLabel is not appropriate for dictated or typed input.
 For example, an element that contains additional descriptive information in its accessibilityLabel can return a more concise label.
 The primary label should be first in the array, optionally followed by alternative labels in descending order of importance.
 If this property returns an empty or invalid value, the accessibilityLabel will be used instead.
 default == an empty array
 default on UIKit controls == an array with an appropriate label, if different from accessibilityLabel
 */
@property (null_resettable, nonatomic, strong) NSArray<NSString *> *accessibilityUserInputLabels API_AVAILABLE(ios(13.0),tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 The underlying attributed versions of the accessibility user input label(s).
 Setting this property will change the value of the accessibilityUserInputLabels property and vice versa.
 */
@property (null_resettable, nonatomic, copy) NSArray<NSAttributedString *> *accessibilityAttributedUserInputLabels API_AVAILABLE(ios(13.0),tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 The elements considered to be the headers for this element. May be set on an instance of
 UIAccessibilityElement, a View or a View Controller. The accessibility container chain,
 and associated view controllers where appropriate, will be consulted.
 To avoid retain cycles, a weak copy of the elements will be held.
 */
@property(nullable, nonatomic, copy) NSArray *accessibilityHeaderElements API_AVAILABLE(tvos(9.0)) API_UNAVAILABLE(ios, watchos) NS_SWIFT_UI_ACTOR;

/*
 Returns an appropriate, named context to help identify and classify the type of text inside this element.
 This can be used by assistive technologies to choose an appropriate way to output the text.
 For example, when encountering a source coding context, VoiceOver could choose to speak all punctuation.
 To specify a substring within the textual context, use the UIAccessibilityTextAttributeContext attributed key.
 default == nil
 */
@property(nullable, nonatomic, strong) UIAccessibilityTextualContext accessibilityTextualContext API_AVAILABLE(ios(13.0), tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Configure how VoiceOver interacts with direct touch areas.
@property(nonatomic, assign) UIAccessibilityDirectTouchOptions accessibilityDirectTouchOptions API_AVAILABLE(ios(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Returns the expanded or collapsed status of an element.
@property(nonatomic, assign) UIAccessibilityExpandedStatus accessibilityExpandedStatus API_AVAILABLE(ios(18.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Block based setters take precedence over single line setters (i.e setAccessibilityLabel:(NSString *)) and property overrides (i.e. accessibilityLabel).
 These methods require the block to have a specific return type that corresponds to the attribute's type.
 Each of these block based setters have a corresponding accessibility property.
 See the notes for the property for more specific information about that property.
*/

typedef BOOL (^AXBoolReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef NSString * __nullable (^AXStringReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef NSArray<NSString *> * __nullable (^AXStringArrayReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef NSAttributedString * __nullable (^AXAttributedStringReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef NSArray<NSAttributedString *> * __nullable (^AXAttributedStringArrayReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef CGRect (^AXRectReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef UIBezierPath * __nullable (^AXPathReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef CGPoint (^AXPointReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef __nullable id (^AXObjectReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef NSArray * __nullable (^AXArrayReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef void (^AXVoidReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef UIAccessibilityTraits (^AXTraitsReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef UIAccessibilityNavigationStyle (^AXNavigationStyleReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef UIAccessibilityContainerType (^AXContainerTypeReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef __nullable UIAccessibilityTextualContext (^AXTextualContextReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef NSArray<UIAccessibilityCustomAction *> * __nullable (^AXCustomActionsReturnBlock)(void) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
typedef __nullable id<UITextInput> (^AXUITextInputReturnBlock)(void) API_AVAILABLE(ios(18.1), visionos(2.1)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;

// Basic accessibility
@property (nullable, nonatomic, copy) AXBoolReturnBlock isAccessibilityElementBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXStringReturnBlock accessibilityLabelBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXStringReturnBlock accessibilityValueBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXStringReturnBlock accessibilityHintBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXTraitsReturnBlock accessibilityTraitsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXStringReturnBlock accessibilityIdentifierBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Defining accessibility text and language
@property (nullable, nonatomic, copy) AXArrayReturnBlock accessibilityHeaderElementsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXAttributedStringReturnBlock accessibilityAttributedLabelBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXAttributedStringReturnBlock accessibilityAttributedHintBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXStringReturnBlock accessibilityLanguageBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXTextualContextReturnBlock accessibilityTextualContextBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXStringArrayReturnBlock accessibilityUserInputLabelsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXAttributedStringArrayReturnBlock accessibilityAttributedUserInputLabelsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXAttributedStringReturnBlock accessibilityAttributedValueBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Configuring behavior
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityElementsHiddenBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityRespondsToUserInteractionBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityViewIsModalBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityShouldGroupAccessibilityChildrenBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) UIAccessibilityExpandedStatus (^NS_SWIFT_UI_ACTOR accessibilityExpandedStatusBlock)(void) API_AVAILABLE(ios(18.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Navigating elements
@property (nullable, nonatomic, copy) AXArrayReturnBlock accessibilityElementsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXArrayReturnBlock automationElementsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXContainerTypeReturnBlock accessibilityContainerTypeBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXPointReturnBlock accessibilityActivationPointBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXRectReturnBlock accessibilityFrameBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXNavigationStyleReturnBlock accessibilityNavigationStyleBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXPathReturnBlock accessibilityPathBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Actions
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityActivateBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXVoidReturnBlock accessibilityIncrementBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXVoidReturnBlock accessibilityDecrementBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityPerformEscapeBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXBoolReturnBlock accessibilityMagicTapBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXCustomActionsReturnBlock accessibilityCustomActionsBlock API_AVAILABLE(ios(17.0), tvos(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

@end



/*
 UIAccessibilityFocus
 
 Assistive technologies, like VoiceOver, maintain a virtual focus on an element
 that allows the user to inspect an element without activating it.
 */
@interface NSObject (UIAccessibilityFocus)

// Override the following methods to know when an assistive technology has set or unset its virtual focus on the element. 
- (void)accessibilityElementDidBecomeFocused API_AVAILABLE(ios(4.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
- (void)accessibilityElementDidLoseFocus API_AVAILABLE(ios(4.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Returns whether an assistive technology is focused on the element.
- (BOOL)accessibilityElementIsFocused API_AVAILABLE(ios(4.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Returns a set of identifier keys indicating which technology is focused on this object
- (nullable NSSet<UIAccessibilityAssistiveTechnologyIdentifier> *)accessibilityAssistiveTechnologyFocusedIdentifiers API_AVAILABLE(ios(9.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

// Returns the element that is currently focused by an assistive technology.
// default = nil.
// Pass in a specific identifier (e.g. UIAccessibilityNotificationVoiceOverIdentifier) in order to choose the focused element for a specific product.
// If no argument is used, the function will returned the element that was most recently focused.
UIKIT_EXTERN __nullable id UIAccessibilityFocusedElement(UIAccessibilityAssistiveTechnologyIdentifier __nullable assistiveTechnologyIdentifier) API_AVAILABLE(ios(9.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

@end

/*
 UIAccessibilityAction

 An element should implement methods in this category if it supports the action.
 */
@interface NSObject (UIAccessibilityAction)

/*
 Implement accessibilityActivate on an element in order to handle the default action.
 For example, if a native control requires a swipe gesture, you may implement this method so that a
 VoiceOver user will perform a double-tap to activate the item.
 If your implementation successfully handles activate, return YES, otherwise return NO.
 default == NO
 */
- (BOOL)accessibilityActivate API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/* 
 If an element has the UIAccessibilityTraitAdjustable trait, it must also implement
 the following methods. Incrementing will adjust the element so that it increases its content,
 while decrementing decreases its content. For example, accessibilityIncrement will increase the value
 of a UISlider, and accessibilityDecrement will decrease the value.
 */   
- (void)accessibilityIncrement API_AVAILABLE(ios(4.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
- (void)accessibilityDecrement API_AVAILABLE(ios(4.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 If an element has the UIAccessibilityTraitSupportsZoom trait, it must also implement
 the following methods. The point is the center point in the coordinate space of the
 corresponding view. For example, if an element allows an expand gesture that modifies the
 view in some way, you may implement accessibilityZoomInAtPoint so that VoiceOver's zoom in
 custom action will receive the same behavior. If your implementation successfully handles
 zooming, return YES, otherwise return NO.
 default == NO
 */
- (BOOL)accessibilityZoomInAtPoint:(CGPoint)point API_AVAILABLE(ios(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
- (BOOL)accessibilityZoomOutAtPoint:(CGPoint)point API_AVAILABLE(ios(17.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 If the user interface requires a scrolling action (e.g. turning the page of a book), a view in the view 
 hierarchy should implement the following method. The return result indicates whether the action 
 succeeded for that direction. If the action failed, the method will be called on a view higher 
 in the hierarchy. If the action succeeds, UIAccessibilityPageScrolledNotification must be posted after
 the scrolling completes.
 default == NO
 */
typedef NS_ENUM(NSInteger, UIAccessibilityScrollDirection) {
    UIAccessibilityScrollDirectionRight = 1,
    UIAccessibilityScrollDirectionLeft,
    UIAccessibilityScrollDirectionUp,
    UIAccessibilityScrollDirectionDown,
    UIAccessibilityScrollDirectionNext API_AVAILABLE(ios(5.0)),
    UIAccessibilityScrollDirectionPrevious API_AVAILABLE(ios(5.0)),
} API_UNAVAILABLE(watchos);

- (BOOL)accessibilityScroll:(UIAccessibilityScrollDirection)direction API_AVAILABLE(ios(4.2)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/* 
 Implement accessibilityPerformEscape on an element or containing view to exit a modal or hierarchical interface view.
 For example, UIPopoverController implements accessibilityPerformEscape on it's root view, so that when
 called (as a result of a VoiceOver user action), it dismisses the popover.
 If your implementation successfully dismisses the current UI, return YES, otherwise return NO.
 default == NO
 */
- (BOOL)accessibilityPerformEscape API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/* 
 Implement accessibilityPerformMagicTap on an element, or the application, in order to provide a context-sensitive action.
 For example, a music player can implement this to start and stop playback, or a recording app could start and stop recording.
 Return YES to indicate that the action was handled.
 default == NO
 */
- (BOOL)accessibilityPerformMagicTap API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/*
 Return an array of UIAccessibilityCustomAction objects to make custom actions for an element accessible to an assistive technology.
 For example, a photo app might have a view that deletes its corresponding photo in response to a flick gesture.
 If the view returns a delete action from this property, VoiceOver and Switch Control users will be able to delete photos without performing the flick gesture.
 default == nil
 */
@property (nullable, nonatomic, strong) NSArray <UIAccessibilityCustomAction *> *accessibilityCustomActions API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
@end

/* 
 UIAccessibilityReadingContent
 
 Implemented on an element that represents content meant to be read, like a book or periodical. 
 Use in conjunction with UIAccessibilityTraitCausesPageTurn to provide a continuous reading experience with VoiceOver.
 */
API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos)
@protocol UIAccessibilityReadingContent
@required

// Returns the line number given a point in the view's coordinate space.
- (NSInteger)accessibilityLineNumberForPoint:(CGPoint)point NS_SWIFT_UI_ACTOR;

// Returns the content associated with a line number as a string.
- (nullable NSString *)accessibilityContentForLineNumber:(NSInteger)lineNumber NS_SWIFT_UI_ACTOR;

// Returns the on-screen rectangle for a line number.
- (CGRect)accessibilityFrameForLineNumber:(NSInteger)lineNumber NS_SWIFT_UI_ACTOR;

// Returns a string representing the text displayed on the current page.
- (nullable NSString *)accessibilityPageContent NS_SWIFT_UI_ACTOR;

@optional
// If an object adopting this protocol responds to these methods, the system will try sending them before sending the non-attributed versions.
- (nullable NSAttributedString *)accessibilityAttributedContentForLineNumber:(NSInteger)lineNumber API_AVAILABLE(ios(11.0), tvos(11.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
- (nullable NSAttributedString *)accessibilityAttributedPageContent API_AVAILABLE(ios(11.0), tvos(11.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

@end

@interface NSObject(UIAccessibilityDragging)

/* By default, if an accessible view or its subtree has drag and/or drop interactions, they will be
 * automatically exposed by assistive technologies. However, if there is more than one such
 * interaction, each drag or drop should have a name to disambiguate it and give a good user
 * experience. Also, there may be situations in which you want to expose drags or drops from an
 * element, and those interactions are installed on views that are not part of that element's view
 * hierarchy subtree.
 *
 * This is trivially the case when the element is not a view at all, but an instance of
 * UIAccessibilityElement.
 *
 * Another example is when a container view maintains interactions that are logically
 * associated with subviews. For instance, UITableView has associated drag interactions that allow
 * for dragging its rows; to make the rows draggable by assistive technologies, UITableViewCell has
 * drag descriptors that describe where in the table view to start a drag to activate dragging of
 * the cell.
 * (Note that this implementation detail is noted here for expository purposes only and may change
 * at any time without warning.)
 *
 * Properties defined here allow you to fine-tune how drags and drops are exposed to assistive
 * technologies. Both of their getter methods can be overridden to provide information on-demand.
 * For each location descriptor, the associated view should be the UIView with the appropriate
 * UIInteraction object for that drag or drop.
 *
 * `accessibilityDragSourceDescriptors` is an array of UIAccessibilityLocationDescriptor
 * objects and is used to define and describe what drags are available from an element.
 *
 * `accessibilityDropPointDescriptors` is similarly an array of
 * UIAccessibilityLocationDescriptor objects and is used to define and describe where
 * drops are possible on this element.
 *
 * To restore the default automatic behavior for these properties, assign (or return) the default
 * value of nil. Note that nil does not describe the same behavior as the empty array, which
 * specifies that there are no relevant interactions for this element.
 *
 */
@property (nullable, nonatomic, copy) NSArray<UIAccessibilityLocationDescriptor *> *accessibilityDragSourceDescriptors API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;

@property (nullable, nonatomic, copy) NSArray<UIAccessibilityLocationDescriptor *> *accessibilityDropPointDescriptors API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;


@end

@interface NSObject (UIAccessibilityHitTest)

// Returns an accessibility element at the specified coordinate. The result should return true for isAccessibilityElement
- (nullable id)accessibilityHitTest:(CGPoint)point withEvent:(nullable UIEvent *)event NS_SWIFT_NAME(accessibilityHitTest(_:event:)) API_AVAILABLE(ios(18.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

@end

@interface NSObject (UIAccessibilityTextNavigation)

// An accessibility element that contains text that is semantically connected to this accessibility element. Assistive technologies will transition to these elements when navigating via text granularities, such as when using the VoiceOver Lines rotor.
@property (nullable, nonatomic, strong) id accessibilityPreviousTextNavigationElement API_AVAILABLE(ios(18.0), visionos(2.0)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, strong) id accessibilityNextTextNavigationElement API_AVAILABLE(ios(18.0), visionos(2.0)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXObjectReturnBlock accessibilityPreviousTextNavigationElementBlock API_AVAILABLE(ios(18.0), visionos(2.0)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXObjectReturnBlock accessibilityNextTextNavigationElementBlock API_AVAILABLE(ios(18.0), visionos(2.0)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;

@end

@interface NSObject (UIAccessibilityTextOperations)

// If your accessibility element represents a view that supports text operations via the UITextInput
// protocol, you may use this property to forward UITextInput calls to your backing view
@property (nullable, nonatomic, weak) id<UITextInput> accessibilityTextInputResponder API_AVAILABLE(ios(18.1), visionos(2.1)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;
@property (nullable, nonatomic, copy) AXUITextInputReturnBlock accessibilityTextInputResponderBlock API_AVAILABLE(ios(18.1), visionos(2.1)) API_UNAVAILABLE(watchos, tvos) NS_SWIFT_UI_ACTOR;

@end

/*
 UIAccessibilityPostNotification
 
 This function posts a notification to assistive applications.
 Some notifications specify a required or optional argument.
 Pass nil for the argument if the notification does not specify otherwise. 
 See UIAccessibilityConstants.h for a list of notifications.
 */
UIKIT_EXTERN void UIAccessibilityPostNotification(UIAccessibilityNotifications notification, __nullable id argument) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

/* 
 Assistive Technology
 
 Use UIAccessibilityIsVoiceOverRunning() to determine if VoiceOver is running.
 Listen for UIAccessibilityVoiceOverStatusDidChangeNotification to know when VoiceOver starts or stops.
 */
UIKIT_EXTERN BOOL UIAccessibilityIsVoiceOverRunning(void) API_AVAILABLE(ios(4.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSString *const UIAccessibilityVoiceOverStatusChanged API_DEPRECATED_WITH_REPLACEMENT("UIAccessibilityVoiceOverStatusDidChangeNotification", ios(4.0, 11.0), tvos(9.0, 11.0)) API_UNAVAILABLE(watchos) API_UNAVAILABLE(visionos) NS_SWIFT_NONISOLATED;
UIKIT_EXTERN NSNotificationName const UIAccessibilityVoiceOverStatusDidChangeNotification API_AVAILABLE(ios(11.0), tvos(11.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether system audio is mixed down from stereo to mono.
UIKIT_EXTERN BOOL UIAccessibilityIsMonoAudioEnabled(void) API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityMonoAudioStatusDidChangeNotification API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for closed captioning is enabled.
UIKIT_EXTERN BOOL UIAccessibilityIsClosedCaptioningEnabled(void) API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityClosedCaptioningStatusDidChangeNotification API_AVAILABLE(ios(5.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for invert colors is enabled.
UIKIT_EXTERN BOOL UIAccessibilityIsInvertColorsEnabled(void) API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityInvertColorsStatusDidChangeNotification API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the app is running under Guided Access mode.
UIKIT_EXTERN BOOL UIAccessibilityIsGuidedAccessEnabled(void) API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityGuidedAccessStatusDidChangeNotification API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for bold text is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsBoldTextEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityBoldTextStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for button shapes is enabled
UIKIT_EXTERN BOOL UIAccessibilityButtonShapesEnabled(void) API_AVAILABLE(ios(14.0), tvos(14.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityButtonShapesEnabledStatusDidChangeNotification API_AVAILABLE(ios(14.0), tvos(14.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for grayscale is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsGrayscaleEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityGrayscaleStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for reduce transparency is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsReduceTransparencyEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityReduceTransparencyStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for reduce motion is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsReduceMotionEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityReduceMotionStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for reduce motion: prefer cross-fade transitions is enabled
UIKIT_EXTERN BOOL UIAccessibilityPrefersCrossFadeTransitions(void) API_AVAILABLE(ios(14.0), tvos(14.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityPrefersCrossFadeTransitionsStatusDidChangeNotification API_AVAILABLE(ios(14.0), tvos(14.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for auto-play videos is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsVideoAutoplayEnabled(void) API_AVAILABLE(ios(13.0), tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityVideoAutoplayStatusDidChangeNotification API_AVAILABLE(ios(13.0), tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for darker colors is enabled
UIKIT_EXTERN BOOL UIAccessibilityDarkerSystemColorsEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityDarkerSystemColorsStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

/*
 Use UIAccessibilityIsSwitchControlRunning() to determine if Switch Control is running.
 Listen for UIAccessibilitySwitchControlStatusDidChangeNotification to know when Switch Control starts or stops.
*/
UIKIT_EXTERN BOOL UIAccessibilityIsSwitchControlRunning(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilitySwitchControlStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for Speak Selection is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsSpeakSelectionEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilitySpeakSelectionStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for Speak Screen is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsSpeakScreenEnabled(void) API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilitySpeakScreenStatusDidChangeNotification API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for Shake to Undo is enabled
UIKIT_EXTERN BOOL UIAccessibilityIsShakeToUndoEnabled(void) API_AVAILABLE(ios(9.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityShakeToUndoDidChangeNotification API_AVAILABLE(ios(9.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for AssistiveTouch is enabled.
// This always returns false if Guided Access is not enabled.
UIKIT_EXTERN BOOL UIAccessibilityIsAssistiveTouchRunning(void) API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityAssistiveTouchStatusDidChangeNotification API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for Differentiate without Color is enabled.
UIKIT_EXTERN BOOL UIAccessibilityShouldDifferentiateWithoutColor(void) API_AVAILABLE(ios(13.0), tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityShouldDifferentiateWithoutColorDidChangeNotification API_AVAILABLE(ios(13.0), tvos(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

// Returns whether the system preference for On/Off labels is enabled.
UIKIT_EXTERN BOOL UIAccessibilityIsOnOffSwitchLabelsEnabled(void) API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityOnOffSwitchLabelsDidChangeNotification API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos) NS_SWIFT_NONISOLATED;

/*
 Use UIAccessibilityRequestGuidedAccessSession() to request this app be locked into or released
 from Single App mode. The request to lock this app into Single App mode will only succeed if the device is Supervised,
 and the app's bundle identifier has been whitelisted using Mobile Device Management. If you successfully request Single
 App mode, it is your responsibility to release the device by balancing this call.
 */
UIKIT_EXTERN void UIAccessibilityRequestGuidedAccessSession(BOOL enable, void(^NS_SWIFT_UI_ACTOR completionHandler)(BOOL didSucceed)) API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(watchos) NS_SWIFT_UI_ACTOR;

typedef NS_OPTIONS(NSUInteger, UIAccessibilityHearingDeviceEar) {
    UIAccessibilityHearingDeviceEarNone    = 0,
    UIAccessibilityHearingDeviceEarLeft    = 1 << 1,
    UIAccessibilityHearingDeviceEarRight   = 1 << 2,
    UIAccessibilityHearingDeviceEarBoth    = UIAccessibilityHearingDeviceEarLeft | UIAccessibilityHearingDeviceEarRight,
} API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(tvos, watchos);

// Returns the current pairing status of MFi hearing aids
UIKIT_EXTERN UIAccessibilityHearingDeviceEar UIAccessibilityHearingDevicePairedEar(void) API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(tvos, watchos) NS_SWIFT_UI_ACTOR;
UIKIT_EXTERN NSNotificationName const UIAccessibilityHearingDevicePairedEarDidChangeNotification API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(tvos, watchos) NS_SWIFT_NONISOLATED;

NS_HEADER_AUDIT_END(nullability, sendability)

#else
#import <UIKitCore/UIAccessibility.h>
#endif
