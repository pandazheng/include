/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITextField.h"

@class _UILegibilitySettings, _UILegibilityView;

@interface SBFolderTitleTextField : UITextField
{
    BOOL _showingEditUI;
    _UILegibilityView *_legibilityView;
    BOOL _allowsEditing;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (id)_clearButtonImage;
- (id)_backgroundImage;
- (void)_updateLegibility;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) float fontSize;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)_updateLegibilityView;
- (void)setShowsEditUI:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

