/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBCollectionImagePrefetcherSpecifier : NSObject {

	char _streaming;
	NSURL* _url;
	unsigned _desiredImageFlag;

}

@property (nonatomic,copy,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char streaming;                         //@synthesize streaming=_streaming - In the implementation block
@property (nonatomic,readonly) unsigned desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
-(unsigned)desiredImageFlag;
-(id)initWithUrl:(id)arg1 streaming:(char)arg2 desiredImageFlag:(unsigned)arg3 ;
-(NSURL *)url;
-(char)streaming;
-(id)uniqueKey;
@end

