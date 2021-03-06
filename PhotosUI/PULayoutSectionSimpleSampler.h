/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectionSampler.h>

@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler {

	int _numberOfVisibleItems;
	int _numberOfRealItems;

}
-(int)indexForUnsampledIndex:(int)arg1 isMainItem:(BOOL*)arg2 ;
-(int)unsampledIndexForIndex:(int)arg1 ;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dumpInternalMemory;
-(id)initWithNumberOfVisibleItems:(int)arg1 numberOfRealItems:(int)arg2 ;
@end

