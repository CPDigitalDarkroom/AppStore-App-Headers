/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBConnectionPageInfoProtocol, FBNetworkerRequestStatus;
@class NSString, FBGraphQLConnectionLocation, NSDictionary;

@interface FBGraphQLConnectionControllerNetworkLoadLoadedEdgesNotification : NSObject {

	char _isLastResponse;
	NSString* _networkLoadUUID;
	NSString* _responseUUID;
	unsigned _responseIndex;
	unsigned _expectedResponseCount;
	FBGraphQLConnectionLocation* _location;
	FBGraphQLConnectionLocation* _originalRequestedLocation;
	id<FBConnectionPageInfoProtocol> _pageInfo;
	unsigned _edgeCount;
	id<FBNetworkerRequestStatus> _status;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                                           //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                                              //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,readonly) unsigned responseIndex;                                                    //@synthesize responseIndex=_responseIndex - In the implementation block
@property (nonatomic,readonly) unsigned expectedResponseCount;                                            //@synthesize expectedResponseCount=_expectedResponseCount - In the implementation block
@property (nonatomic,readonly) char isLastResponse;                                                       //@synthesize isLastResponse=_isLastResponse - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLocation * originalRequestedLocation;              //@synthesize originalRequestedLocation=_originalRequestedLocation - In the implementation block
@property (nonatomic,readonly) id<FBConnectionPageInfoProtocol> pageInfo;                                 //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,readonly) unsigned edgeCount;                                                        //@synthesize edgeCount=_edgeCount - In the implementation block
@property (nonatomic,readonly) id<FBNetworkerRequestStatus> status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                              //@synthesize userInfo=_userInfo - In the implementation block
-(id<FBConnectionPageInfoProtocol>)pageInfo;
-(unsigned)responseIndex;
-(unsigned)expectedResponseCount;
-(NSString *)networkLoadUUID;
-(NSString *)responseUUID;
-(id)initWithNetworkLoadUUID:(id)arg1 responseUUID:(id)arg2 responseIndex:(unsigned)arg3 expectedResponseCount:(unsigned)arg4 isLastResponse:(char)arg5 location:(id)arg6 originalRequestedLocation:(id)arg7 pageInfo:(id)arg8 edgeCount:(unsigned)arg9 status:(id)arg10 userInfo:(id)arg11 ;
-(FBGraphQLConnectionLocation *)originalRequestedLocation;
-(char)isLastResponse;
-(id)description;
-(NSDictionary *)userInfo;
-(FBGraphQLConnectionLocation *)location;
-(id<FBNetworkerRequestStatus>)status;
-(unsigned)edgeCount;
@end

