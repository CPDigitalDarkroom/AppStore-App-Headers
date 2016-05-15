/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNTwitterAuthenticated;
@class TFNStopwatch, TFNTwitterStream, TFNTwitterScribeContext;

@interface T1TimelinesStreamScribeLogger : NSObject {

	char _shouldLogFirstTweetAPI;
	char _shouldLogDidBecomeActive;
	TFNStopwatch* _refreshStopwatch;
	TFNTwitterStream*<TFNTwitterAuthenticated> _stream;
	TFNTwitterScribeContext* _scribeContext;

}

@property (nonatomic,readonly) TFNTwitterStream*<TFNTwitterAuthenticated> stream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) TFNTwitterScribeContext * scribeContext;                        //@synthesize scribeContext=_scribeContext - In the implementation block
+(char)_visiblePanelViewControllerMatchesPanel:(int)arg1 ;
-(TFNTwitterScribeContext *)scribeContext;
-(void)_streamDidUpdateFromAPI:(id)arg1 ;
-(int)_representedStreamPanelID;
-(void)_scribeStreamDidUpdateFromAPINotificationIfNeeded:(id)arg1 ;
-(id)initWithStream:(id)arg1 scribeContext:(id)arg2 ;
-(void)streamWillLoadTop;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(TFNTwitterStream*<TFNTwitterAuthenticated>)stream;
-(id)_account;
@end

