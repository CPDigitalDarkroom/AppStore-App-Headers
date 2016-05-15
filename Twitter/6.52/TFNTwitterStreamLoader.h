/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TFNTwitterStreamLoader : NSObject {

	char _isActivity;
	char _hasLoadedTop;
	char _loading;
	char _cancelled;
	id _stream;
	id _userInfo;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) id stream;                   //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) id userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) char loading;                //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id completion;                   //@synthesize completion=_completion - In the implementation block
-(void)_streamDidLoad;
-(void)_loadStream;
-(char)_isStreamLoading;
-(void)cancel;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(char)cancelled;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)load;
-(void)_didComplete;
-(id)initWithStream:(id)arg1 ;
-(id)stream;
-(char)loading;
@end

