/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBImageDownload.h>

@interface FBStreamingImageDownload : FBImageDownload {

	unsigned _nextFlagToNotify;
	unsigned _nextFlagToDecode;
	unsigned _desiredImageFlag;
	unsigned _imageFlagsToBeNotified;
	/*^block*/id _streamingBlock;

}

@property (nonatomic,readonly) unsigned desiredImageFlag;                    //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned imageFlagsToBeNotified;              //@synthesize imageFlagsToBeNotified=_imageFlagsToBeNotified - In the implementation block
@property (nonatomic,copy,readonly) id streamingBlock;                       //@synthesize streamingBlock=_streamingBlock - In the implementation block
-(unsigned)desiredImageFlag;
-(unsigned)imageFlagsToBeNotified;
-(void)cleanUpAfterCompletionOrCancelation;
-(char)_shouldNotifyAboutImage:(id)arg1 ;
-(void)_updateNextFlagToNotify:(unsigned)arg1 ;
-(char)decodeCachedImageIfNeeded:(id)arg1 ;
-(unsigned)_nextImageFlagInImageFlagsToBeNotifiedLargerThan:(unsigned)arg1 ;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 priority:(int)arg3 options:(unsigned)arg4 desiredImageFlag:(unsigned)arg5 imageFlagsToBeNotified:(unsigned)arg6 callPath:(id)arg7 callbackQueue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(void)completeAndCleanupWithImage:(id)arg1 type:(unsigned)arg2 error:(id)arg3 delegate:(id)arg4 ;
-(id)finalCachedImageToBeUsedFromCachedImage:(id)arg1 ;
-(id)streamingBlock;
@end

