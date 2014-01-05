/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>
#import "CDStructures.h"
#import "SBIconListLayoutDelegate-Protocol.h"

inline SBIconCoordinate SBIconCoordinateMake(NSInteger row, NSInteger col)
{
    return (SBIconCoordinate){row, col};
}

@class NSArray, NSMutableArray, NSMutableSet, SBIcon, SBIconView, SBIconListModel, SBIconViewMap;

@interface SBIconListView : UIView
{
    SBIconListModel *_model;
    SBIconViewMap *_viewMap;
    UIInterfaceOrientation _orientation;
    CGFloat _statusBarHeight;
    SBIcon *_bouncedIcon;
    NSMutableArray *_removedIcons;
    NSArray *_rotationContainers;
    NSUInteger _needsLayout:1;
    NSUInteger _rotating:1;
    UIView *_fadeView;
    BOOL _purged;
    NSMutableSet *_notShownIconViews;
    BOOL _isEditing;
    id<SBIconListLayoutDelegate> _layoutDelegate;
    CGRect _wallpaperRelativeFrame;
}

+ (NSUInteger)maxVisibleIcons;
+ (NSUInteger)maxIcons;
+ (NSUInteger)iconColumnsForInterfaceOrientation:(UIInterfaceOrientation)orientation;
+ (NSUInteger)maxVisibleIconRowsInterfaceOrientation:(UIInterfaceOrientation)orientation;
+ (NSUInteger)iconRowsForInterfaceOrientation:(UIInterfaceOrientation)orientation;
+ (NSInteger)rotationAnchor;
@property(nonatomic, assign) id <SBIconListLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) CGRect wallpaperRelativeFrame; // @synthesize wallpaperRelativeFrame=_wallpaperRelativeFrame;
@property(nonatomic) CGFloat statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) UIInterfaceOrientation orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL purged; // @synthesize purged=_purged;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
- (void)_sendLayoutDelegateLayoutInvalidated;
- (void)_sendLayoutDelegateWouldHaveMovedIcon:(SBIcon *)icon;
- (void)cleanupAfterRotation;
- (void)performRotationWithDuration:(double)arg1;
- (void)prepareToRotateToInterfaceOrientation:(UIInterfaceOrientation)orient;
- (NSUInteger)rowAtPoint:(CGPoint)point;
- (NSUInteger)columnAtPoint:(CGPoint)point;
- (CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1;
- (CGFloat)verticalIconPadding;
- (CGFloat)horizontalIconPadding;
- (CGFloat)horizontalBumpForColumn:(NSUInteger)arg1;
- (CGFloat)sideIconInset;
- (CGFloat)bottomIconInset;
- (CGFloat)topIconInset;
- (id)bouncedIcon;
- (void)setBouncedIcon:(SBIcon *)icon;
- (BOOL)isDock;
- (void)enumerateIconViewsUsingBlock:(id)arg1;
- (void)enumerateIconsUsingBlock:(id)arg1;
- (void)_updateEditingStateForIcons:(id)arg1 animated:(BOOL)arg2;
- (void)updateEditingStateAnimated:(BOOL)arg1;
- (void)showIconImagesFromColumn:(NSInteger)arg1 toColumn:(NSInteger)arg2 totalColumns:(NSInteger)arg3 allowAnimations:(BOOL)arg4;
- (void)showAllIcons;
- (id)iconAtPoint:(CGPoint)point index:(NSUInteger *)outIdx proposedOrder:(int *)arg3 grabbedIcon:(SBIcon *)icon;
- (id)iconAtPoint:(CGPoint)point index:(NSUInteger *)outIdx;
- (void)layoutIconsIfNeeded:(double)arg1 domino:(BOOL)arg2;
- (void)layoutIconsNow;
- (void)setIconsNeedLayout;
- (void)setFrame:(CGRect)arg1;
- (NSUInteger)indexOfIcon:(SBIcon *)icon;
- (SBIconCoordinate)coordinateForIconAtIndex:(NSUInteger)arg1;
- (SBIconCoordinate)coordinateForIcon:(SBIcon *)icon;
- (SBIconView *)viewForIcon:(SBIcon *)icon;
- (CGPoint)centerForIconCoordinate:(SBIconCoordinate)arg1;
- (CGPoint)centerForIcon:(SBIcon *)icon;
- (CGPoint)originForIcon:(SBIcon *)icon;
- (CGPoint)originForIconAtIndex:(NSUInteger)idx;
- (CGSize)defaultIconSize;
- (void)removeAllIconAnimations;
- (void)setAlphaForAllIcons:(CGFloat)alpha;
- (void)removeIcon:(SBIcon *)icon;
- (void)removeIconAtIndex:(NSUInteger)idx;
- (id)removedIcons;
- (id)insertIcon:(SBIcon *)icon atIndex:(NSUInteger)idx moveNow:(BOOL)arg3;
- (id)insertIcon:(SBIcon *)icon atIndex:(NSUInteger)idx moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)placeIcon:(SBIcon *)icon atIndex:(NSUInteger)idx moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (void)_layoutIcon:(SBIcon *)icon atIndex:(NSUInteger)idx createViewNow:(BOOL)arg3 pop:(BOOL)arg4;
- (void)_popIconView:(id)arg1;
- (NSUInteger)firstFreeSlotOrLastSlotIndexForType:(NSInteger)arg1;
- (NSUInteger)firstFreeSlotOrLastSlotIndex;
- (NSUInteger)firstFreeSlotIndexForType:(NSInteger)arg1;
- (NSUInteger)firstFreeSlotIndex;
- (BOOL)containsIcon:(SBIcon *)icon;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (NSArray *)visibleIcons;
- (NSArray *)icons;
- (BOOL)compactIcons:(BOOL)wat;
- (NSUInteger)rowForIcon:(SBIcon *)icon;
- (NSString *)description;
- (SBIconCoordinate)iconCoordinateForIndex:(NSUInteger)index forOrientation:(UIInterfaceOrientation)orientation;
- (NSUInteger)indexForCoordinate:(SBIconCoordinate)coordinate forOrientation:(UIInterfaceOrientation)orientation;
- (NSInteger)iconLocation;
- (NSUInteger)iconRowsForSpacingCalculation;
- (NSUInteger)iconsInRowForSpacingCalculation;
- (NSUInteger)iconColumnsForCurrentOrientation;
- (NSUInteger)iconRowsForCurrentOrientation;
- (CGPoint)_wallpaperRelativeIconCenterForIconView:(SBIconView *)iconView;
- (CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(CGPoint)point;
- (Class)baseIconViewClass;
- (SBIconViewMap *)viewMap;
- (id)model;
- (void)setModel:(id)model;
- (void)dealloc;
- (instancetype)initWithModel:(SBIconListModel *)model orientation:(UIInterfaceOrientation)orientation viewMap:(SBIconViewMap *)viewMap;
- (instancetype)init;
- (Class)modelClass;

@end

