/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, UIScrollView, UIView, NSURLRequest;


@protocol FBWebView <NSObject>
@property (assign,nonatomic) int displayState; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (nonatomic,readonly) char canGoBack; 
@property (nonatomic,readonly) char canGoForward; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView; 
@property (nonatomic,retain) UIView * errorView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (assign,nonatomic) char isBannerAtTop; 
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) char youtubeNavigationFix; 
@optional
-(char)currentlyCrashed;
-(char)recoveredFromOOMCrash;
-(void)addScriptMessageHandlerForName:(id)arg1;
-(id)backForwardList;
-(void)removeScriptMessageHandlerForName:(id)arg1;

@required
-(int)displayState;
-(NSURL *)currentLocationURL;
-(int)webViewImplementation;
-(void)setGestureRecognizersEnabled:(char)arg1;
-(void)updateOrientationWithOrientation:(int)arg1;
-(void)setYoutubeNavigationFix:(char)arg1;
-(void)setDisplayState:(int)arg1;
-(void)setIsBannerAtTop:(char)arg1;
-(char)isBannerAtTop;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(char)youtubeNavigationFix;
-(UIView *)bannerView;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned)arg1;
-(unsigned)dataDetectorTypes;
-(void)loadRequest:(id)arg1;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
-(char)isLoading;
-(char)canGoBack;
-(char)canGoForward;
-(void)setKeyboardDisplayRequiresUserAction:(char)arg1;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(char)hasOnlySecureContent;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setErrorView:(id)arg1;
-(UIView *)errorView;
-(void)setBannerView:(id)arg1;

@end

