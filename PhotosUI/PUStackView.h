/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class PUPhotoDecoration, UIImage, NSArray, NSPointerArray;

@interface PUStackView : UIView {

	CATransform3D _transforms[3];
	BOOL _imageHidden[3];
	BOOL _needsDynamicLayout;
	unsigned _style;
	PUPhotoDecoration* _photoDecoration;
	int _numberOfVisibleItems;
	UIImage* _emptyPlaceholderImage;
	int __numberOfViews;
	NSArray* __photoViews;
	NSPointerArray* __imageSizes;
	NSArray* __photoDecorationVariants;
	CGSize _stackSize;
	UIOffset _stackOffset;
	UIOffset _stackPerspectiveOffset;
	CGPoint _stackPerspectiveFactor;
	UIEdgeInsets _stackPerspectiveInsets;

}

@property (assign,nonatomic) unsigned style;                                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PUPhotoDecoration * photoDecoration;                                               //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,nonatomic) CGSize stackSize;                                                                  //@synthesize stackSize=_stackSize - In the implementation block
@property (assign,nonatomic) UIOffset stackOffset;                                                              //@synthesize stackOffset=_stackOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets stackPerspectiveInsets;                                               //@synthesize stackPerspectiveInsets=_stackPerspectiveInsets - In the implementation block
@property (assign,nonatomic) UIOffset stackPerspectiveOffset;                                                   //@synthesize stackPerspectiveOffset=_stackPerspectiveOffset - In the implementation block
@property (assign,nonatomic) CGPoint stackPerspectiveFactor;                                                    //@synthesize stackPerspectiveFactor=_stackPerspectiveFactor - In the implementation block
@property (nonatomic,readonly) NSArray * stackItemViews; 
@property (assign,nonatomic) int numberOfVisibleItems;                                                          //@synthesize numberOfVisibleItems=_numberOfVisibleItems - In the implementation block
@property (nonatomic,retain) UIImage * emptyPlaceholderImage;                                                   //@synthesize emptyPlaceholderImage=_emptyPlaceholderImage - In the implementation block
@property (nonatomic,readonly) int _numberOfViews;                                                              //@synthesize _numberOfViews=__numberOfViews - In the implementation block
@property (nonatomic,readonly) NSArray * _photoViews;                                                           //@synthesize _photoViews=__photoViews - In the implementation block
@property (nonatomic,readonly) NSPointerArray * _imageSizes;                                                    //@synthesize _imageSizes=__imageSizes - In the implementation block
@property (setter=_setPhotoDecorationVariants:,nonatomic,copy) NSArray * _photoDecorationVariants;              //@synthesize _photoDecorationVariants=__photoDecorationVariants - In the implementation block
+(int)maximumNumberOfVisibleItemsForStyle:(unsigned)arg1 ;
+(int)maximumNumberOfVisibleImagesForStyle:(unsigned)arg1 ;
-(void)setStackSize:(CGSize)arg1 ;
-(CGSize)stackSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(unsigned)arg1 ;
-(unsigned)style;
-(void)setPhotoDecoration:(id)arg1 ;
-(id)photoDecoration;
-(int)numberOfVisibleItems;
-(void)setAlpha:(float)arg1 forItemAtIndex:(int)arg2 ;
-(id)newLayoutAttributesForItemAtIndex:(int)arg1 relativeToView:(id)arg2 ;
-(UIOffset)stackOffset;
-(UIEdgeInsets)stackPerspectiveInsets;
-(UIOffset)stackPerspectiveOffset;
-(void)setNumberOfVisibleItems:(int)arg1 ;
-(void)setImageSize:(CGSize)arg1 forItemAtIndex:(int)arg2 ;
-(void)setImage:(id)arg1 forItemAtIndex:(int)arg2 ;
-(void)setVideoBannerVisible:(BOOL)arg1 duration:(id)arg2 isSlalom:(BOOL)arg3 forItemAtIndex:(int)arg4 ;
-(id)stackItemViews;
-(CGRect)frameOfFrontStackItemRelativeToView:(id)arg1 ;
-(BOOL)wouldCoverAllItemsInStackView:(id)arg1 ;
-(void)setStackOffset:(UIOffset)arg1 ;
-(void)setStackPerspectiveInsets:(UIEdgeInsets)arg1 ;
-(void)setStackPerspectiveOffset:(UIOffset)arg1 ;
-(void)_updateDynamicLayout;
-(int)_numberOfViews;
-(id)_photoViews;
-(void)_getCenter:(CGPoint*)arg1 bounds:(CGRect*)arg2 forPhotoViewAtIndex:(int)arg3 ;
-(void)_rebuildDecorationVariants;
-(void)_setNeedsDynamicLayout;
-(void)_updateVisibleDecorationVariants;
-(id)_imageSizes;
-(id)_photoDecorationVariants;
-(id)emptyPlaceholderImage;
-(void)_setPhotoDecorationVariants:(id)arg1 ;
-(CGPoint)stackPerspectiveFactor;
-(void)setStackPerspectiveFactor:(CGPoint)arg1 ;
-(BOOL)isImageHiddenForItemAtIndex:(int)arg1 ;
-(void)setImageHidden:(BOOL)arg1 forItemAtIndex:(int)arg2 ;
-(void)setEmptyPlaceholderImage:(id)arg1 ;
-(id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 ;
-(void).cxx_destruct;
@end

