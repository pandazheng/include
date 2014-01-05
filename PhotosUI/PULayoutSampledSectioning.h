/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectioning.h>

@class NSArray;

@interface PULayoutSampledSectioning : PULayoutSectioning {

	BOOL _sectioningIsValid;
	BOOL _samplingIsValid;
	int _numberOfRealSections;
	int _numberOfVisualSections;
	NSArray* _realSectionIndexesForVisualSection;
	int* _visualSectionForRealSection;
	int* _numberOfItemsForRealSection;
	int* _numberOfRealItemsForVisualSection;
	int* _startIndexInVisualSectionForRealSection;
	id* _sectionSamplers;
	int* _maximumNumberOfVisibleItemsForVisualSection;
	BOOL _hasSomeSampling;
	int _lastHitRealSectionIndex;
	int _lastHitVisualSectionIndex;
	int _lastHitRangeIndex;
	BOOL _supportsSamplingAndSectionGrouping;

}

@property (assign,nonatomic) BOOL supportsSamplingAndSectionGrouping;              //@synthesize supportsSamplingAndSectionGrouping=_supportsSamplingAndSectionGrouping - In the implementation block
-(void)dealloc;
-(id)init;
-(int)visualSectionForRealSection:(int)arg1 ;
-(int)mainRealSectionForVisualSection:(int)arg1 ;
-(void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(int)numberOfVisualItemsInVisualSection:(int)arg1 ;
-(void)setSupportsSamplingAndSectionGrouping:(BOOL)arg1 ;
-(void)invalidateSampling;
-(void)invalidateSections;
-(PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(PUSimpleIndexPath)arg1 ;
-(PUSimpleIndexPath)visualIndexPathForRealIndexPath:(PUSimpleIndexPath)arg1 isMainItem:(BOOL*)arg2 ;
-(void)enumerateRealMainItemIndexPathsForVisualSection:(int)arg1 inVisualItemRange:(NSRange)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(int)numberOfRealItemsInVisualSection:(int)arg1 ;
-(int)__debugUnsampledIndexForRealIndexPath:(PUSimpleIndexPath)arg1 ;
-(BOOL)hasSomeSampling;
-(id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1 ;
-(void)_discardSamplingCache;
-(void)_discardSectioningCache;
-(void)_cacheSectioningIfNeeded;
-(id)_sectionSamplerForVisualSection:(int)arg1 ;
-(int)_unsampledItemIndexForVisualItemIndex:(int)arg1 visualSection:(int)arg2 ;
-(PUSimpleIndexPath)_mainRealItemIndexPathForVisualSection:(int)arg1 andUnsampledItemIndex:(int)arg2 ;
-(int)_visualItemIndexForUnsampledItemIndex:(int)arg1 visualSection:(int)arg2 isMainItem:(BOOL*)arg3 ;
-(BOOL)supportsSamplingAndSectionGrouping;
-(void).cxx_destruct;
@end

