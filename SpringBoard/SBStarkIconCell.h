/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBCollectionViewCell.h"

@class SBIcon, SBStarkIconImageView, UIView<SBIconAccessoryView>;

@interface SBStarkIconCell : SBCollectionViewCell
{
    SBIcon *_icon;
    SBStarkIconImageView *_iconImageView;
    UIView<SBIconAccessoryView> *_accessoryView;
    BOOL _disableFrameChangeOnHighlight;
    float _initialHeight;
    BOOL _temporarilyEnableHighlightDimming;
}

@property(nonatomic) BOOL temporarilyEnableHighlightDimming; // @synthesize temporarilyEnableHighlightDimming=_temporarilyEnableHighlightDimming;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (struct CGRect)_accessoryFrameInBounds:(struct CGRect)arg1;
- (id)description;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)_didSetHighlighted:(BOOL)arg1;
@property(retain, nonatomic) SBIcon *icon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <SBStarkIconCellDelegate> delegate;

@end
