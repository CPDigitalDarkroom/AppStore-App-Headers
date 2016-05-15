/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class T1DirectMessageConversationDisplayModel;

@interface T1DirectMessageConversationUpdate : NSObject {

	char _animated;
	T1DirectMessageConversationDisplayModel* _displayModel;
	/*^block*/id _updates;
	/*^block*/id _willUpdate;
	/*^block*/id _didUpdate;

}

@property (nonatomic,readonly) T1DirectMessageConversationDisplayModel * displayModel;              //@synthesize displayModel=_displayModel - In the implementation block
@property (nonatomic,readonly) id updates;                                                          //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) id willUpdate;                                                  //@synthesize willUpdate=_willUpdate - In the implementation block
@property (nonatomic,copy,readonly) id didUpdate;                                                   //@synthesize didUpdate=_didUpdate - In the implementation block
@property (assign,nonatomic) char animated;                                                         //@synthesize animated=_animated - In the implementation block
-(T1DirectMessageConversationDisplayModel *)displayModel;
-(id)didUpdate;
-(id)initWithDisplayModel:(id)arg1 updates:(/*^block*/id)arg2 willUpdate:(/*^block*/id)arg3 didUpdate:(/*^block*/id)arg4 ;
-(char)canCoalesceUpdate:(id)arg1 ;
-(void)coalesceUpdate:(id)arg1 ;
-(char)animated;
-(void)setAnimated:(char)arg1 ;
-(id)willUpdate;
-(id)updates;
@end

