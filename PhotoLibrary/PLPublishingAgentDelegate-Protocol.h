/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol PLPublishingAgentDelegate
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;

@optional
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
@end

