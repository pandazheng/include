/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon <NSCopying>
{
    BOOL _wasUninstalledByUser;
    BOOL _isNewsstandDownload;
    SBApplicationPlaceholder *_appPlaceholder;
}

+ (instancetype)leafIdentifierForApplicationPlaceholder:(SBApplicationPlaceholder *)placeholder;
+ (instancetype)leafIdentifierForApplicationPlaceholderBundleID:(NSString *)bundleID;

- (void)cancelDownload;
- (BOOL)iconAppearsInNewsstand;
- (void)_showAlertForError:(id)arg1;
- (void)setUninstalledByUser:(BOOL)uninstalledByUser;
- (BOOL)uninstalledByUser;
- (void)setNewsstandDownload:(BOOL)newsstandDownload;
- (BOOL)isNewsstandDownload;
- (BOOL)matchesApplicationIcon:(SBApplicationIcon *)icon;
- (SBApplicationPlaceholder *)appPlaceholder;
- (void)setApplicationPlaceholder:(SBApplicationPlaceholder *)placholder;
- (void)reloadForStatusChange;
- (void)completeUninstall;
- (id)realDisplayName;
- (id)homescreenIconImage;
- (id)_darkenedIconImageForImage:(id)arg1;
- (id)gridCellImage;
- (id)identifierForCorrespondingApplicationIcon;

- (instancetype)initWithApplicationPlaceholder:(SBApplicationPlaceholder *)placeholder;

@end

