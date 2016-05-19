/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDLProtocolListener;
@class NSMutableDictionary;

@interface SDLProtocolReceivedMessageRouter : NSObject {

	char _alreadyDestructed;
	id<SDLProtocolListener> _delegate;
	NSMutableDictionary* _messageAssemblers;

}

@property (__weak) id<SDLProtocolListener> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign) char alreadyDestructed;                               //@synthesize alreadyDestructed=_alreadyDestructed - In the implementation block
@property (retain) NSMutableDictionary * messageAssemblers;              //@synthesize messageAssemblers=_messageAssemblers - In the implementation block
-(void)handleReceivedMessage:(id)arg1 ;
-(void)destructObjects;
-(void)setMessageAssemblers:(NSMutableDictionary *)arg1 ;
-(void)dispatchProtocolMessage:(id)arg1 ;
-(void)dispatchControlMessage:(id)arg1 ;
-(void)dispatchMultiPartMessage:(id)arg1 ;
-(NSMutableDictionary *)messageAssemblers;
-(char)alreadyDestructed;
-(void)setAlreadyDestructed:(char)arg1 ;
-(void)dispose;
-(void)setDelegate:(id<SDLProtocolListener>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SDLProtocolListener>)delegate;
@end

