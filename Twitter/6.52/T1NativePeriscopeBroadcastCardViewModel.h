/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1MultiPhotoDownloaderDelegate.h>
#import <Twitter/TFNTwitterCardContextModel.h>
#import <Twitter/T1PlayerCardViewModel.h>

@class TFNTwitterCardContext, T1PeriscopeBroadcast, NSDateFormatter, NSString;

@interface T1NativePeriscopeBroadcastCardViewModel : NSObject <T1MultiPhotoDownloaderDelegate, TFNTwitterCardContextModel, T1PlayerCardViewModel> {

	char _refreshing;
	TFNTwitterCardContext* _cardContext;
	T1PeriscopeBroadcast* _broadcast;
	NSDateFormatter* _dateFormatter;
	double _refreshInterval;

}

@property (nonatomic,retain) TFNTwitterCardContext * cardContext;              //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) T1PeriscopeBroadcast * broadcast;                 //@synthesize broadcast=_broadcast - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) char refreshing;              //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic) double refreshInterval;                           //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * streamURL; 
@property (nonatomic,readonly) char isVine; 
@property (nonatomic,readonly) char isAmplify; 
@property (nonatomic,readonly) char canPlayStreamInline; 
@property (nonatomic,readonly) int playerControllerMode; 
-(char)isVine;
-(id)initWithCardContext:(id)arg1 ;
-(char)canPlayStreamInline;
-(char)isAmplify;
-(int)playerControllerMode;
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(id)playerImage;
-(void)stopRefresh;
-(void)startRefresh;
-(void)_refreshResponse:(id)arg1 ;
-(id)_lastUpdateOrDistantPast;
-(void)_updateCardDataFromCrawledWebPage:(id)arg1 ;
-(void)startThumbnailImageDownload;
-(void)_updateCardDataFromCAPIResponse:(id)arg1 ;
-(void)setBroadcast:(T1PeriscopeBroadcast *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)dealloc;
-(char)isRefreshing;
-(void)setRefreshInterval:(double)arg1 ;
-(void)setRefreshing:(char)arg1 ;
-(double)refreshInterval;
-(T1PeriscopeBroadcast *)broadcast;
-(NSString *)streamURL;
@end

