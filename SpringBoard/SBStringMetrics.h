/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration>
{
    NSMutableArray *_fragments;
}

- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (unsigned int)fragmentCount;
- (id)fragments;
- (void)addFragment:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

