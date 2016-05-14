/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, NSURL, FBPopoverInfo, NSString;

@interface FBNavigationInfo : NSObject {

	UIViewController* _viewController;
	NSURL* _URL;
	unsigned _method;
	unsigned _options;
	FBPopoverInfo* _popoverInfo;
	/*^block*/id _completion;
	/*^block*/id _whenClosed;
	NSString* _sourceApplication;
	double _timestamp;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sourceApplication;                     //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (assign,nonatomic) unsigned method;                                //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) unsigned options;                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FBPopoverInfo * popoverInfo;                    //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id whenClosed;                                    //@synthesize whenClosed=_whenClosed - In the implementation block
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
+(id)infoWithURL:(id)arg1 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 ;
+(id)infoWithViewController:(id)arg1 ;
+(id)infoWithURL:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 ;
+(id)navigationInfoWithTimestamp:(id)arg1 ;
+(id)navigationInfoWithAnnouncer:(id)arg1 shouldAnnounceCompletion:(char)arg2 shouldAnnounceClosing:(char)arg3 originalInfo:(id)arg4 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 completion:(/*^block*/id)arg4 whenClosed:(/*^block*/id)arg5 ;
+(id)infoWithURL:(id)arg1 completion:(/*^block*/id)arg2 whenClosed:(/*^block*/id)arg3 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 timestamp:(double)arg7 ;
+(id)infoWithURL:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 timestamp:(double)arg7 ;
+(id)infoWithURL:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 ;
+(id)infoWithViewController:(id)arg1 completion:(/*^block*/id)arg2 whenClosed:(/*^block*/id)arg3 ;
+(id)infoWithViewController:(id)arg1 popoverInfo:(id)arg2 ;
+(id)infoWithViewController:(id)arg1 popoverInfo:(id)arg2 completion:(/*^block*/id)arg3 whenClosed:(/*^block*/id)arg4 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 popoverInfo:(id)arg4 ;
+(id)infoWithURL:(id)arg1 popoverInfo:(id)arg2 ;
+(id)infoWithURL:(id)arg1 method:(unsigned)arg2 options:(unsigned)arg3 completion:(/*^block*/id)arg4 whenClosed:(/*^block*/id)arg5 ;
-(void)setSourceApplication:(NSString *)arg1 ;
-(NSString *)sourceApplication;
-(void)setPopoverInfo:(FBPopoverInfo *)arg1 ;
-(FBPopoverInfo *)popoverInfo;
-(id)whenClosed;
-(void)setWhenClosed:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(unsigned)method;
-(void)setMethod:(unsigned)arg1 ;
@end

