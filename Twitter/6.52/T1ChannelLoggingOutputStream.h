/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwitterLoggingService/TLSOutputStream.h>

@protocol T1ChannelLoggingOutputStreamDelegate;
@class NSMutableArray, NSSet, NSArray, NSString;

@interface T1ChannelLoggingOutputStream : NSObject <TLSOutputStream> {

	NSMutableArray* _logEntries;
	id<T1ChannelLoggingOutputStreamDelegate> _delegate;
	NSSet* _channels;

}

@property (assign,nonatomic,__weak) id<T1ChannelLoggingOutputStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * channels;                                               //@synthesize channels=_channels - In the implementation block
@property (nonatomic,readonly) NSArray * logEntries; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChannels:(id)arg1 ;
-(NSArray *)logEntries;
-(void)clearLog;
-(void)tls_outputLogInfo:(id)arg1 ;
-(int)tls_shouldFilterLevel:(unsigned)arg1 channel:(id)arg2 contextObject:(id)arg3 ;
-(NSSet *)channels;
-(void)setDelegate:(id<T1ChannelLoggingOutputStreamDelegate>)arg1 ;
-(id)init;
-(id<T1ChannelLoggingOutputStreamDelegate>)delegate;
@end

