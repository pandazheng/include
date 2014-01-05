/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBFLegibilitySettingsProvider.h"
#import "SBFWallpaperViewLegibilityObserver.h"

@class NSDictionary, NSTimer, SBFLockScreenSimpleDateFormatter, UIImage, _UILegibilitySettings;

@interface SBFWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLegibilitySettingsProvider>
{
    NSTimer *_dateTimer;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    UIImage *_wallpaperImage;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    _Bool _colorSamplingEnabled;
    _Bool _allowScrolling;
    SBFLockScreenSimpleDateFormatter *_dateFormatter;
}

@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startDateTimer;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_dateView;
- (id)_wallpaperView;
- (id)_previewView;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect)arg1;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1;
- (id)_backdropWallpaperView;
- (void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly) UIImage *wallpaperImage;
@property(nonatomic) _Bool colorSamplingEnabled;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithMagicWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithColorSamplingEnabled:(_Bool)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

