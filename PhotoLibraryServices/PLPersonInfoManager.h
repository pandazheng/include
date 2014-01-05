/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface PLPersonInfoManager : NSObject
{
    NSMutableDictionary *_personDictsForPersonID;
    NSString *_plistPath;
}

+ (id)sharedManager;
- (void)setPersonInfo:(id)arg1 forPersonID:(id)arg2;
- (id)personInfoForPersonID:(id)arg1;
- (void)removePersistedInfo;
- (void)_loadDictionariesIfNeeded;
- (id)plistPath;
- (void)clearCacheForPersonID:(id)arg1;
- (id)phonesForInvitationRecordGUID:(id)arg1;
- (id)emailsForInvitationRecordGUID:(id)arg1;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1;
- (void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3;
- (id)emailForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5;
- (void)dealloc;
- (id)init;

@end

