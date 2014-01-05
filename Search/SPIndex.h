/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:16 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSNumber, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface SPIndex : NSObject {

	NSURL* _storeURL;
	BOOL _ubiquity;
	NSNumber* _maxID;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}
-(BOOL)save;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)managedObjectModel;
-(id)managedObjectContext;
-(id)persistentStoreCoordinator;
-(void)erase;
-(void)deleteRecords:(id)arg1 ;
-(id)createRecord;
-(id)recordsForCxIDs:(id)arg1 ;
-(id)recordsForExtIDs:(id)arg1 ;
-(id)initWithPath:(id)arg1 usingUbiquity:(BOOL)arg2 ;
-(id)topHitForExtID:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3 ;
-(id)createTopHit;
-(id)topHitsForCxIDs:(id)arg1 ;
-(id)_objectsForCXIDs:(id)arg1 entityName:(id)arg2 ;
-(id)maxExistingCXIDForEntityName:(id)arg1 ;
-(id)nextCXIDForEntityName:(id)arg1 ;
-(id)_createObject:(id)arg1 ;
-(id)recordForExtID:(id)arg1 ;
-(void)deleteRecordsWithExtIDs:(id)arg1 ;
-(void)deleteTopHitsWithExtIDs:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3 ;
@end

