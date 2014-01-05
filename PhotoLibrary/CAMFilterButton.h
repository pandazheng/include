/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class UIImageView;

@interface CAMFilterButton : UIButton
{
    UIImageView *__circlesImageView;
}

+ (id)filterButton;
@property(readonly, nonatomic) UIImageView *_circlesImageView; // @synthesize _circlesImageView=__circlesImageView;
- (id)_filterOnImage;
- (id)_filterImage;
@property(nonatomic, getter=isOn) _Bool on;
- (double)_selectedIndicatorAlpha;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMFilterButtonInitialization;

@end

