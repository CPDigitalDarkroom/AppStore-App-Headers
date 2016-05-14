/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class FBUserSession;

@interface FBPKVSObjectStoreFactory : NSObject {

	FBUserSession* _session;
	unordered_map<FBDiskStoreIdentifier, FBPKVSObjectStore *, std::__1::hash<FBDiskStoreIdentifier>, std::__1::equal_to<FBDiskStoreIdentifier>, std::__1::allocator<std::__1::pair<const FBDiskStoreIdentifier, FBPKVSObjectStore *> > >* _stores;
	mutex _lock;

}
-(id)objectStoreForPKVSIdentifier:(unsigned)arg1 ;
-(id)objectStoreForDiskCacheIdentifier:(unsigned)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

