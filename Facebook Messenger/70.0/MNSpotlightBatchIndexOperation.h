/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSArray, MNSpotlightIndexingListenerAnnouncer, NSObject;

@interface MNSpotlightBatchIndexOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _searchableItems;
	MNSpotlightIndexingListenerAnnouncer* _announcer;
	char _isFinished;
	char _isExecuting;
	char _isCancelled;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_performIndexCancelCompletion;
-(void)_performIndexCompletion;
-(void)_startExecuting;
-(void)_performIndexCompletionWithIdentifiers:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 searchableItems:(id)arg2 announcer:(id)arg3 ;
-(char)isAsynchronous;
-(void)cancel;
-(void)start;
-(char)isCancelled;
-(char)isFinished;
-(char)isExecuting;
@end

