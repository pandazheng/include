/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOBatchReverseGeocodeRequest, NSArray, NSManagedObjectID, NSString, PLRevGeoLocationInfo;

@interface PLMomentAnalyzerGeoRequestInfo : NSObject
{
    unsigned long long _requestType;
    NSManagedObjectID *_momentId;
    NSString *_momentUuid;
    NSArray *_assetIds;
    GEOBatchReverseGeocodeRequest *_reverseGeocodeRequest;
    unsigned long long _failureCount;
    NSArray *_extraAssetIds;
    NSArray *_extraLocations;
    PLRevGeoLocationInfo *_revGeoLocationInfo;
}

@property(retain, nonatomic) PLRevGeoLocationInfo *revGeoLocationInfo; // @synthesize revGeoLocationInfo=_revGeoLocationInfo;
@property(copy, nonatomic) NSArray *extraLocations; // @synthesize extraLocations=_extraLocations;
@property(copy, nonatomic) NSArray *extraAssetIds; // @synthesize extraAssetIds=_extraAssetIds;
@property(nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(retain, nonatomic) GEOBatchReverseGeocodeRequest *reverseGeocodeRequest; // @synthesize reverseGeocodeRequest=_reverseGeocodeRequest;
@property(copy, nonatomic) NSArray *assetIds; // @synthesize assetIds=_assetIds;
@property(copy, nonatomic) NSString *momentUuid; // @synthesize momentUuid=_momentUuid;
@property(retain, nonatomic) NSManagedObjectID *momentId; // @synthesize momentId=_momentId;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic, getter=hasExtraData) _Bool extraData;
- (void)dealloc;
- (id)initWithRequestType:(unsigned long long)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5;

@end
