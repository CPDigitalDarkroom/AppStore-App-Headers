/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCRecentCallLogListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBWebRTCCallLogViewModelDelegate;
@class FBWebRTCRecentCallLog, FBWebRTCContactReadThroughCache, NSArray, NSString;

@interface FBWebRTCCallLogViewModel : NSObject <FBWebRTCRecentCallLogListener, FBClassProvidable> {

	FBWebRTCRecentCallLog* _callLog;
	FBWebRTCContactReadThroughCache* _contactCache;
	NSArray* _fullyFetchedCallEntries;
	char _useCallAggregation;
	id<FBWebRTCCallLogViewModelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallLogViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)checkCallLogModelSnapshotEqualityBetween:(id)arg1 and:(id)arg2 considerUnseenState:(char)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)recentCallLogLoaded;
-(void)recentCallLogCallsChanged;
-(void)recentCallLogUnseenMissedCallCountChanged;
-(id)initWithRecentCallLog:(id)arg1 contactCache:(id)arg2 experimentManager:(id)arg3 ;
-(id)getContactForFBID:(id)arg1 ;
-(int)numberOfRecentCallEntriesIncludesAllMissedCalls;
-(void)setAllCallsSeen;
-(char)isDate:(id)arg1 sameDayAsDate:(id)arg2 ;
-(void)groupByUser:(id)arg1 resultTo:(id)arg2 ;
-(id)getCallLogGroupedByDate;
-(id)getCallLog;
-(int)getRecentCallsCount;
-(id)getSnapshot;
-(void)setDelegate:(id<FBWebRTCCallLogViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCCallLogViewModelDelegate>)delegate;
-(char)isLoaded;
-(void)deleteCallAtIndex:(int)arg1 ;
@end

