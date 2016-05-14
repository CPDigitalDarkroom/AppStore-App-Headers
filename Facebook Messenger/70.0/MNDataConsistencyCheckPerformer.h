/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNDataConsistencyCheckPerforming.h>

@protocol MNDataConsistencyCheckServerDataFetching, MNDataConsistencyComparisonExecuting, OS_dispatch_queue;
@class FBAnalytics, NSObject, NSString;

@interface MNDataConsistencyCheckPerformer : NSObject <MNDataConsistencyCheckPerforming> {

	id<MNDataConsistencyCheckServerDataFetching> _serverDataFectcher;
	id<MNDataConsistencyComparisonExecuting> _comparisonExecutor;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServerDataFetcher:(id)arg1 comparisonExecutor:(id)arg2 analytics:(id)arg3 queue:(id)arg4 ;
-(void)performDataConsistencyCheckWithClientDataset:(id)arg1 ;
-(void)_handleServerDataFetched:(id)arg1 withClientData:(id)arg2 ;
-(void)_handleServerFetchFailureWithError:(id)arg1 ;
@end

