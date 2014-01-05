/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIControl.h>
#import <PhotoLibrary/PLCameraController.h>
#import "CAMFlashButtonDelegate-Protocol.h"

@class CAMButtonLabel, UIImageView;

@interface CAMFlashButton : UIControl
{
    _Bool _autoHidden;
    _Bool _showWarningIndicator;
    _Bool _expanded;
    PLFlashMode _flashMode;
    long long _orientation;
    id <CAMFlashButtonDelegate> _delegate;
    UIImageView *__flashIconView;
    UIImageView *__warningImageView;
    CAMButtonLabel *__autoLabel;
    CAMButtonLabel *__onLabel;
    CAMButtonLabel *__offLabel;
    double __lastTapTime;
}

+ (id)flashButton;
@property(nonatomic, setter=_setLastTapTime:) double _lastTapTime; // @synthesize _lastTapTime=__lastTapTime;
@property(readonly, nonatomic) CAMButtonLabel *_offLabel; // @synthesize _offLabel=__offLabel;
@property(readonly, nonatomic) CAMButtonLabel *_onLabel; // @synthesize _onLabel=__onLabel;
@property(readonly, nonatomic) CAMButtonLabel *_autoLabel; // @synthesize _autoLabel=__autoLabel;
@property(readonly, nonatomic) UIImageView *_warningImageView; // @synthesize _warningImageView=__warningImageView;
@property(readonly, nonatomic) UIImageView *_flashIconView; // @synthesize _flashIconView=__flashIconView;
@property(nonatomic, assign) id <CAMFlashButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setExpanded:(_Bool)arg1;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) PLFlashMode flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic, getter=isShowingWarningIndicator) _Bool showWarningIndicator; // @synthesize showWarningIndicator=_showWarningIndicator;
@property(nonatomic, getter=isAutoHidden) _Bool autoHidden; // @synthesize autoHidden=_autoHidden;
- (void)_scheduleCollapse;
- (void)_cancelCollapse;
- (void)_collapseAnimated;
- (void)collapse;
- (void)_collapseAndSetMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_expandAnimated:(_Bool)arg1;
- (_Bool)handleTapAtLocation:(CGPoint)arg1;
- (void)_handleTapRecognizer:(id)arg1;
- (CGAffineTransform)_currentTransform;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)_currentHeight;
- (double)_currentWidth;
- (double)_computeLayoutAndApply:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFlashMode:(PLFlashMode)arg1 notifyDelegate:(_Bool)arg2;
- (void)_loadWarningResources;
- (id)_localizedString:(id)arg1;
- (void)_updateFrame;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_performHighlightAnimation;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonCAMFlashButtonInitialization;

@end

