/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkerRequestDelegate <NSObject>
@optional
-(void)networkerRequestDidStart:(id)arg1;
-(void)networkerRequest:(id)arg1 didUploadBytes:(long long)arg2 outOf:(long long)arg3;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(float)arg2 complete:(char)arg3;
-(void)networkerRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(float)arg2 complete:(char)arg3;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 willRetryWithError:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;

@end

