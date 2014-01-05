/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface PUAbstractTransitionLayoutAttributes : UICollectionViewLayoutAttributes {

	CGPoint _extrapolationReferencePoint;
	double _progress;

}

@property (assign,nonatomic) CGPoint extrapolationReferencePoint;              //@synthesize extrapolationReferencePoint=_extrapolationReferencePoint - In the implementation block
@property (assign,nonatomic) double progress;                                  //@synthesize progress=_progress - In the implementation block
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)updateForProgress;
-(CGPoint)extrapolationReferencePoint;
-(float)_rubberbandFromFloat:(float)arg1 toFloat:(float)arg2 withExtrapolatedFloat:(float)arg3 ;
-(CGPoint)extrapolatedPointFromReferencePointToPoint:(CGPoint)arg1 forProgress:(double)arg2 ;
-(CGPoint)rubberbandFromInitialPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 withExtrapolatedPoint:(CGPoint)arg3 ;
-(void)setExtrapolationReferencePoint:(CGPoint)arg1 ;
@end

