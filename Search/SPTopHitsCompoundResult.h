/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:16 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SPContentResult, NSString;

@interface SPTopHitsCompoundResult : NSObject {

	SPContentResult* _content;
	unsigned _domain;
	NSString* _displayIdentifier;

}
-(void)dealloc;
-(id)displayIdentifier;
-(unsigned)domain;
-(id)content;
-(id)initWithContent:(id)arg1 domain:(unsigned)arg2 displayIdentifier:(id)arg3 ;
@end

