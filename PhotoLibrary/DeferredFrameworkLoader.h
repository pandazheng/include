/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DeferredFrameworkLoader : NSObject
{
    NSString *_path;
    void *_frameworkHandle;
    long long _frameworkLoadedToken;
}

+ (id)PhotosUIFrameworkPath;
@property(nonatomic) long long frameworkLoadedToken; // @synthesize frameworkLoadedToken=_frameworkLoadedToken;
@property(nonatomic) void *frameworkHandle; // @synthesize frameworkHandle=_frameworkHandle;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (Class)classFromString:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

