/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSuggestedContactsRetriever.h>

@protocol FBServiceTransactionMutating, MNSuggestedContactsRetrieverDelegate;
@class FBUserSession, MNUserStore, FBMThreadStore, FBViewerContext, NSString;

@interface MNRideServicePromoEligibleContactsRetriever : NSObject <MNSuggestedContactsRetriever> {

	FBUserSession* _session;
	MNUserStore* _userStore;
	FBMThreadStore* _threadStore;
	FBViewerContext* _viewerContext;
	NSString* _providerName;
	NSString* _promoData;
	id<FBServiceTransactionMutating> _requestToken;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(void)_fetchContentForQuery:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(void)_handleQueryResponseContent:(id)arg1 error:(id)arg2 startTime:(double)arg3 ;
-(void)_handleLoadSuccessWithThreadSummaries:(id)arg1 ;
-(void)_handleLoadFailureWithError:(id)arg1 ;
-(id)initWithSession:(id)arg1 viewerContext:(id)arg2 userStore:(id)arg3 threadStore:(id)arg4 providerName:(id)arg5 promoData:(id)arg6 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

