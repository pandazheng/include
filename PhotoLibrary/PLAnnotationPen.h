/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSSet;

@interface PLAnnotationPen : NSObject
{
    NSMutableSet *_set;
    id _target;
    SEL _selector;
    id _context;
}

@property(nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) NSSet *set; // @synthesize set=_set;
- (_Bool)empty;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAllAnnotations;
- (void)addAnnotations:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

