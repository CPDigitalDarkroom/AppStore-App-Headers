/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSuggestedContactsRetriever.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNSuggestedContactsRetrieverDelegate;
@class MNUserStore, NSSet, NSString;

@interface MNPreselectedContactsRetriever : NSObject <MNSuggestedContactsRetriever, FBClassProvidable> {

	MNUserStore* _userStore;
	NSSet* _idsToFetch;
	unsigned long _requestId;
	id<MNSuggestedContactsRetrieverDelegate> delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MNSuggestedContactsRetrieverDelegate> delegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setIDsToFetch:(id)arg1 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(id)initWithUserStore:(id)arg1 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

