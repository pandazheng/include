/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotosUI/PlacesMapViewDelegateDetailsDelegate.h>
#import <PhotoLibrary/PLAssetContainerObserver.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver.h>

@protocol PLDiagnosticsProvider;
@class PLPlacesMapViewDelegate, PLPlaces, MKMapView, NSArray, NSObject;

@interface PUPlacesViewController : UIViewController <PlacesMapViewDelegateDetailsDelegate, PLAssetContainerObserver, PLAssetContainerListChangeObserver> {

	PLPlacesMapViewDelegate* _placesMapKitDelegate;
	PLPlaces* _places;
	NSObject* _allPhotosAlbum;
	MKMapView* _mapView;
	BOOL _networkingEnabled;
	BOOL _refreshMapAfterResume;
	BOOL _suspended;
	BOOL _allowDetails;
	NSArray* _locationAssets;
	NSObject<PLDiagnosticsProvider>* _diagnosticsProvider;

}

@property (assign,nonatomic) BOOL allowDetails;                                                  //@synthesize allowDetails=_allowDetails - In the implementation block
@property (nonatomic,copy) NSArray * locationAssets;                                             //@synthesize locationAssets=_locationAssets - In the implementation block
@property (nonatomic,retain) NSObject<PLDiagnosticsProvider> * diagnosticsProvider;              //@synthesize diagnosticsProvider=_diagnosticsProvider - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)assetContainerDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(BOOL)pu_wantsTabBarVisible;
-(void)_updateNavItem;
-(void)_handleReportButton:(id)arg1 ;
-(id)diagnosticsProvider;
-(void)setDiagnosticsProvider:(id)arg1 ;
-(id)locationAssets;
-(BOOL)allowDetails;
-(void)_setNetworkingEnabled:(BOOL)arg1 ;
-(void)displayDetailsForAlbum:(NSObject*)arg1 ;
-(void)setAllowDetails:(BOOL)arg1 ;
-(void)setLocationAssets:(id)arg1 ;
-(void).cxx_destruct;
@end

