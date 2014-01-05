/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBFolderView.h"

#import "SBIconIndexNodeObserver.h"

@class SBNewsstandBackgroundView, UIButton;

@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver>
{
    UIButton *_storeButton;
    UIButton *_emptyImageButton;
    SBNewsstandBackgroundView *_backgroundView;
}

- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_updateEmptyState;
- (void)_storeButtonTapped:(id)arg1;
- (void)_newsstandStoreAvailabilityDidChangeNotification:(id)arg1;
- (void)_layoutSubviews;
- (void)setLegibilitySettings:(id)arg1;
- (float)_titleFontSize;
- (BOOL)_showsTitle;
- (void)setFolder:(id)arg1;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2;

@end

