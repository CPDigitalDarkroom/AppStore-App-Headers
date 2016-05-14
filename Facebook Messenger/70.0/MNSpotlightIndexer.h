/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex, FBAnalytics;

@interface MNSpotlightIndexer : NSObject {

	CSSearchableIndex* _searchableIndex;
	FBAnalytics* _analytics;
	char _closed;

}
-(id)initWithSearchableIndex:(id)arg1 analytics:(id)arg2 ;
-(void)_completeIndexSearchableItems:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)deleteIndexesWithIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)clearAndCloseIndexWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)clearIndexWithDomainIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)indexSearchableItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)indexSearchableItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

