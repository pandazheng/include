/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <ChatKit/MKMapViewDelegate.h>
#import <PhotosUI/PUMapAnnotationManagerDataSource.h>
#import <PhotosUI/PUPhotoBrowserZoomTransitionDelegate.h>
#import <PhotosUI/PUStackedAlbumTransitionDelegate.h>

@protocol PLDiagnosticsProvider;
@class MKMapView, NSMutableArray, NSArray, PUMapAnnotationManager, PUMapViewControllerSpec, NSObject;

@interface PUMapViewController : UIViewController <MKMapViewDelegate, PUMapAnnotationManagerDataSource, PUPhotoBrowserZoomTransitionDelegate, PUStackedAlbumTransitionDelegate> {

	MKMapView* _mapView;
	NSMutableArray* _mapAnnotations;
	NSArray* _mapItems;
	PUMapAnnotationManager* _annotationManager;
	PUMapViewControllerSpec* _spec;
	BOOL _useCurrentUserLocation;
	float _annotationWidth;
	float _borderAnnotationPadding;
	CGSize _annotationSize;
	BOOL _updatedInitialAnnotations;
	BOOL _shouldShowToolbar;
	BOOL _shouldShowTabBar;
	unsigned _maxItemsInitialZoom;
	NSObject<PLDiagnosticsProvider>* _diagnosticsProvider;

}

@property (assign,nonatomic) unsigned maxItemsInitialZoom;                                       //@synthesize maxItemsInitialZoom=_maxItemsInitialZoom - In the implementation block
@property (assign,nonatomic) BOOL shouldShowToolbar;                                             //@synthesize shouldShowToolbar=_shouldShowToolbar - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTabBar;                                              //@synthesize shouldShowTabBar=_shouldShowTabBar - In the implementation block
@property (nonatomic,retain) NSObject<PLDiagnosticsProvider> * diagnosticsProvider;              //@synthesize diagnosticsProvider=_diagnosticsProvider - In the implementation block
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5 ;
-(BOOL)shouldShowToolbar;
-(BOOL)shouldShowTabBar;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3 ;
-(void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 ;
-(void)_createAnnotationManager;
-(void)updateAssets:(id)arg1 ;
-(void)_updateAnnotationsForMapItems:(id)arg1 ;
-(void)_updateAnnotationsForMapItems:(id)arg1 shouldScroll:(BOOL)arg2 ;
-(void)_addLocationsToArray:(id)arg1 forInitialZoomWithMapItems:(id)arg2 ;
-(void)_showLocations:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateNavItem;
-(void)_handleReportButton:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)_displayDetailsForAlbum:(NSObject*)arg1 ;
-(CGRect)zoomTransition:(id)arg1 frameForPhotoToken:(id)arg2 operation:(int)arg3 ;
-(id)_annotationViewForPhotoToken:(id)arg1 ;
-(id)_puAnnotationViewForAnnotation:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2 ;
-(id)mapAnnotationManager:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(SCD_Struct_PU9)arg3 ;
-(id)initWithSpec:(id)arg1 assets:(id)arg2 ;
-(SCD_Struct_PU11)_mapRectWithDefaultZoomCenteredAtCoordinate:(SCD_Struct_PU9)arg1 ;
-(unsigned)maxItemsInitialZoom;
-(void)setMaxItemsInitialZoom:(unsigned)arg1 ;
-(void)setShouldShowToolbar:(BOOL)arg1 ;
-(void)setShouldShowTabBar:(BOOL)arg1 ;
-(id)diagnosticsProvider;
-(void)setDiagnosticsProvider:(id)arg1 ;
-(void).cxx_destruct;
@end

