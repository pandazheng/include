/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_4_0
#include_next <UIKit/UIActionSheet.h>
#endif

@class NSString, UILabel, NSMutableArray, UIWindow, UIToolbar;
@protocol UIActionSheetDelegate;

@interface UIActionSheet ()
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;
-(void)dealloc;
-(void)setMessage:(id)message;
-(id)message;
-(void)setDefaultButtonIndex:(int)index;
-(int)defaultButtonIndex;
-(void)_setFirstOtherButtonIndex:(int)index;
-(id)initWithFrame:(CGRect)frame;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)presentFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;
-(void)_presentPopoverInCenterOfWindowForView:(id)view;
#endif
@end

@interface UIActionSheet (Private)
+(CGSize)minimumSize;
+(id)_popupAlertBackground;
-(id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;
-(BOOL)requiresPortraitOrientation;
-(int)_currentOrientation;
-(void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;
-(id)buttons;
-(void)_createTitleLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_setupTitleStyle;
-(void)setBodyText:(id)text;
-(void)setTaglineText:(id)text;
-(void)setSubtitle:(id)subtitle;
-(id)subtitle;
-(id)bodyText;
-(void)setTitleMaxLineCount:(int)count;
-(int)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(int)count;
-(int)bodyMaxLineCount;
-(id)addTextFieldWithValue:(id)value label:(id)label;
-(id)textFieldAtIndex:(int)index;
-(int)textFieldCount;
-(id)textField;
-(void)_alertSheetTextFieldReturn:(id)aReturn;
-(id)keyboard;
-(void)setDefaultButton:(id)button;
-(id)defaultButton;
-(void)setDestructiveButton:(id)button;
-(id)destructiveButton;
-(id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;
-(id)addButtonWithTitle:(id)title label:(id)label;
-(id)_addButtonWithTitle:(id)title;
-(id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;
-(id)buttonAtIndex:(int)index;
-(id)_titleLabel;
-(int)buttonCount;
-(void)setContext:(id)context;
-(id)context;
-(void)_buttonClicked:(id)clicked;
-(void)_cleanupAfterPopupAnimation;
-(void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;
-(BOOL)tableShouldShowMinimumContent;
-(id)table;
-(BOOL)_needsKeyboard;
-(void)setShowsOverSpringBoardAlerts:(BOOL)alerts;
-(BOOL)showsOverSpringBoardAlerts;
-(void)_performPopup:(BOOL)popup;
-(void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;
-(void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;
-(void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;
-(BOOL)_isAnimating;
-(void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;
-(void)_performPopoutAnimationAnimated:(BOOL)animated;
-(void)_repopup;
-(BOOL)_dimsBackground;
-(BOOL)_canShowAlerts;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_temporarilyHideAnimated:(BOOL)animated;
-(void)_setupInitialFrame;
-(void)_rotatingAnimationDidStop:(id)_rotatingAnimation;
-(void)layoutAnimated:(BOOL)animated;
-(BOOL)isBodyTextTruncated;
-(void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;
-(void)_layoutIfNeeded;
-(void)_adjustLabelFontSizes;
-(void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;
-(void)popupAlertAnimated:(BOOL)animated;
-(void)_presentSheetFromView:(id)view above:(BOOL)above;
-(void)presentSheetFromBehindView:(id)behindView;
-(void)presentSheetFromAboveView:(id)aboveView;
-(void)presentSheetInView:(id)view;
-(void)presentSheetToAboveView:(id)aboveView;
-(void)setDimView:(id)view;
-(id)_dimView;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;
-(void)_slideSheetOut:(BOOL)anOut;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)animated;
-(CGSize)backgroundSize;
-(float)_titleVerticalTopInset;
-(float)_titleVerticalBottomInset;
-(float)_titleHorizontalInset;
-(float)_bottomVerticalInset;
-(void)drawRect:(CGRect)rect;
-(void)_appSuspended:(id)suspended;
-(void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;
-(void)setNumberOfRows:(int)rows;
-(int)numberOfRows;
-(int)alertSheetStyle;
-(void)setAlertSheetStyle:(int)style;
-(void)setDimsBackground:(BOOL)background;
-(BOOL)dimsBackground;
-(void)setSuspendTag:(int)tag;
-(int)suspendTag;
-(void)setBlocksInteraction:(BOOL)interaction;
-(BOOL)blocksInteraction;
-(void)setRunsModal:(BOOL)modal;
-(BOOL)runsModal;
-(CGRect)titleRect;
-(float)_maxHeight;
-(float)_buttonHeight;
-(void)layout;
-(int)numberOfLinesInTitle __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)presentSheetFromButtonBar:(id)buttonBar;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(id)_relinquishPopoverController;
-(void)presentSheetInPopoverView:(id)popoverView;
-(void)presentSheetInContentView:(id)contentView;
-(id)_dimViewWithFrame:(CGRect)frame;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate inView:(id)view;
-(void)setInPopover:(BOOL)popover;
#endif
@end

