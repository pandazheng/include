/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBControlCenterSectionViewController.h"

#import "MPUSystemMediaControlsDelegate.h"

@class MPUSystemMediaControlsViewController;

@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate>
{
    MPUSystemMediaControlsViewController *_systemMediaViewController;
}

- (void)systemMediaControlsViewController:(id)arg1 didReceiveTapOnControlType:(int)arg2;
- (void)viewDidLoad;
- (struct CGSize)contentSizeForOrientation:(int)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

