/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedViewControllerSpec.h>

@interface PUFeedViewControllerPadSpec : PUFeedViewControllerSpec
-(id)gridSpec;
-(id)photoBrowserSpec;
-(void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(int)arg2 ;
-(UIEdgeInsets)contentInsetsForSectionType:(int)arg1 collectionViewType:(int)arg2 ;
-(CGSize)minimumVideoTileSize;
-(BOOL)shouldShowCommentBadgesInCollectionViewType:(int)arg1 ;
-(id)defaultTextAttributesForCollectionViewType:(int)arg1 ;
-(id)emphasizedTextAttributesForCollectionViewType:(int)arg1 ;
-(void)configureTextCell:(id)arg1 forCaption:(id)arg2 ;
-(void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2 ;
-(int)largeNumberOfSubjectsForLikes;
-(void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2 ;
-(void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2 ;
-(void)configureCommentSeparatorMetrics:(inout PUFeedSeparatorMetrics*)arg1 ;
-(CGSize)thumbnailSize;
-(BOOL)shouldUseAspectThumbnails;
-(CGSize)thumbnailSizeForImageSize:(CGSize)arg1 ;
-(BOOL)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(int)arg1 ;
-(BOOL)shouldShowLikeButtonForCollectionViewType:(int)arg1 ;
-(void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(int)arg5 collectionViewType:(int)arg6 animated:(BOOL)arg7 ;
-(BOOL)shouldShowDatesInSectionFootersInCollectionViewType:(int)arg1 ;
-(void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(int)arg3 ;
-(void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(int)arg3 ;
-(void)getReferenceMaximumLength:(float*)arg1 minimumNumberOfTilesToOmit:(int*)arg2 forSectionType:(int)arg3 collectionViewType:(int)arg4 ;
-(void)configureSeparatorMetrics:(inout PUFeedSeparatorMetrics*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(BOOL)arg4 collectionViewType:(int)arg5 ;
-(void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(int)arg3 ;
-(float)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2 ;
-(BOOL)shouldHideBarsInLandscape;
-(BOOL)shouldShowInvitationsInPopover;
-(id)photosPickerSpec;
-(id)popoverFeedViewControllerSpec;
-(int)promptType;
-(BOOL)shouldUseFullscreenLayout;
@end

