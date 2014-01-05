/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIKit.h>

@class NSString, UIImageView, UIPasscodeField, UITextInputTraits;

@interface SBDeviceLockEntryField : UIView
{
    int _style;
    long long _interfaceOrientation;
    UIPasscodeField *_passcodeField;
    UITextInputTraits *_textInputTraits;
    CFCharacterSetRef _numericTrimmingSet;
    UIImageView *_shadowView;
    _Bool _highlighted;
    id _delegate;
}

+ (id)topShadowImage;
@property(nonatomic, assign) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)passcodeFieldDidAcceptEntry:(id)arg1;
- (_Bool)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeFieldTextDidChange:(id)arg1;
- (id)textInputTraits;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
@property(nonatomic, getter=isOkayButtonEnabled) _Bool okayButtonEnabled;
@property(copy, nonatomic) NSString *stringValue;
- (void)_layoutForCurrentDevice;
- (id)_backgroundImage;
- (CGSize)_fieldSizeForCurrentDevice;
- (id)passcodeField;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2;

@end

