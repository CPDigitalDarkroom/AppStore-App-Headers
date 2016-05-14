/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactImporterAddressBookReaderDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactImporterNetworkerDelegate.h>

@class FBUserSession, FBContactImporterAddressBookReader, FBContactImporterNetworker, NSArray, NSMutableSet, NSMutableArray, NSMutableDictionary, NSDictionary, NSString, FBContactImporterRevampModelListenerAnnouncer, NSSet;

@interface FBContactImporterRevampModel : NSObject <FBContactImporterAddressBookReaderDelegate, FBContactImporterNetworkerDelegate> {

	FBUserSession* _session;
	FBContactImporterAddressBookReader* _addressBookReader;
	FBContactImporterNetworker* _networker;
	NSArray* _abContacts;
	NSMutableSet* _matchedFaceBookUserIDs;
	NSMutableArray* _friendableContacts;
	NSArray* _invitableContacts;
	NSArray* _pymk;
	int _contactImporterFlow;
	NSMutableDictionary* _ciFBPersonForFBID;
	NSMutableSet* _ciFBPersonForContacts;
	NSMutableSet* _ciFBPersonForPYMK;
	NSDictionary* _recordIDToContactsDict;
	NSString* _requestSessionID;
	FBContactImporterRevampModelListenerAnnouncer* _announcer;
	char _sortContactsBeforeUpload;
	char _protectedDataAvailable;
	int _modelStage;

}

@property (assign) char protectedDataAvailable;                                    //@synthesize protectedDataAvailable=_protectedDataAvailable - In the implementation block
@property (copy,readonly) NSArray * friendableContacts;                            //@synthesize friendableContacts=_friendableContacts - In the implementation block
@property (copy,readonly) NSArray * invitableContacts;                             //@synthesize invitableContacts=_invitableContacts - In the implementation block
@property (copy,readonly) NSArray * pymk;                                          //@synthesize pymk=_pymk - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ciFBPersonForFBID;              //@synthesize ciFBPersonForFBID=_ciFBPersonForFBID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * ciFBPersonForContacts;                 //@synthesize ciFBPersonForContacts=_ciFBPersonForContacts - In the implementation block
@property (nonatomic,copy,readonly) NSSet * ciFBPersonForPYMK;                     //@synthesize ciFBPersonForPYMK=_ciFBPersonForPYMK - In the implementation block
@property (readonly) int modelStage;                                               //@synthesize modelStage=_modelStage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)didAddressBookReadSucceedWithContacts:(id)arg1 ;
-(void)didAddressBookReadFailWithError:(id)arg1 ;
-(void)contactImporterNetworkerDidPartialFinish:(id)arg1 withFriendableResponse:(id)arg2 forBatchAtIndex:(unsigned)arg3 ;
-(void)contactImporterNetworkerDidPartialFinish:(id)arg1 forContactRange:(NSRange)arg2 forBatchAtIndex:(unsigned)arg3 ;
-(void)contactImporterNetworkerDidPartialFail:(id)arg1 withError:(id)arg2 forBatchAtIndex:(unsigned)arg3 ;
-(void)contactImporterNetworkerDidFinish:(id)arg1 withFriendableResponse:(id)arg2 invitableResponse:(id)arg3 ;
-(void)contactImporterNetworkerDidFail:(id)arg1 withError:(id)arg2 ;
-(void)contactImporterNetworkerDidFinish:(id)arg1 withPYMKResponse:(id)arg2 ;
-(void)contactImporterNetworkerDidFail:(id)arg1 withPYMKError:(id)arg2 ;
-(id)initWithSession:(id)arg1 contactImporterFlow:(int)arg2 ;
-(id)_buildRecordIDToValueMap:(id)arg1 ;
-(id)_sortRecordsByValues:(id)arg1 values:(id)arg2 ;
-(id)_buildRecordIDToContactsMap:(id)arg1 ;
-(id)_valueForContact:(id)arg1 ;
-(void)loadWithRequestSessionID:(id)arg1 ;
-(NSArray *)friendableContacts;
-(NSArray *)invitableContacts;
-(NSArray *)pymk;
-(NSDictionary *)ciFBPersonForFBID;
-(NSSet *)ciFBPersonForContacts;
-(NSSet *)ciFBPersonForPYMK;
-(int)modelStage;
-(char)protectedDataAvailable;
-(void)setProtectedDataAvailable:(char)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

