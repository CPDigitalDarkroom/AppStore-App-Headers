/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, FBScenePath;

@interface FBImagePrefetchSpecifier : NSObject {

	char _useImageStreamer;
	char _prefetchOnCellular;
	NSURL* _url;
	NSString* _module;
	unsigned _desiredImageFlag;
	FBScenePath* _scenePath;

}

@property (nonatomic,copy,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) char useImageStreamer;                  //@synthesize useImageStreamer=_useImageStreamer - In the implementation block
@property (nonatomic,readonly) unsigned desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) char prefetchOnCellular;                //@synthesize prefetchOnCellular=_prefetchOnCellular - In the implementation block
-(NSString *)module;
-(FBScenePath *)scenePath;
-(unsigned)desiredImageFlag;
-(char)prefetchOnCellular;
-(char)useImageStreamer;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 useImageStreamer:(char)arg4 desiredImageFlag:(unsigned)arg5 prefetchOnCellular:(char)arg6 ;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 prefetchOnCellular:(char)arg4 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSURL *)url;
@end

