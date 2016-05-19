/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPTPopupButton : NSObject {

	NSString* _title;
	id _target;
	SEL _action;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id actionHandler;                //@synthesize actionHandler=_actionHandler - In the implementation block
+(id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)buttonWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)buttonWithTitle:(id)arg1 ;
-(id)makePrimaryButton;
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(void)configurePopupButton:(id)arg1 ;
-(id)makeSecondaryButton;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(NSString *)title;
-(id)target;
-(id)initWithTitle:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
@end

