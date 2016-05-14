/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface BFWebViewAppLinkResolverWebViewDelegate : NSObject <UIWebViewDelegate> {

	char _hasLoaded;
	/*^block*/id _didFinishLoad;
	/*^block*/id _didFailLoadWithError;

}

@property (nonatomic,copy) id didFinishLoad;                        //@synthesize didFinishLoad=_didFinishLoad - In the implementation block
@property (nonatomic,copy) id didFailLoadWithError;                 //@synthesize didFailLoadWithError=_didFailLoadWithError - In the implementation block
@property (assign,nonatomic) char hasLoaded;                        //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)didFinishLoad;
-(id)didFailLoadWithError;
-(void)setDidFinishLoad:(id)arg1 ;
-(void)setDidFailLoadWithError:(id)arg1 ;
-(void)setHasLoaded:(char)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(char)hasLoaded;
@end

