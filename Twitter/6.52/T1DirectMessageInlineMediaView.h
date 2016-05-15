/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1InlineMediaView.h>

@interface T1DirectMessageInlineMediaView : T1InlineMediaView {

	char _isOutgoingMessage;
	UIEdgeInsets _mediaPreviewInsets;

}

@property (nonatomic,readonly) UIEdgeInsets mediaPreviewInsets;              //@synthesize mediaPreviewInsets=_mediaPreviewInsets - In the implementation block
@property (nonatomic,readonly) char isOutgoingMessage;                       //@synthesize isOutgoingMessage=_isOutgoingMessage - In the implementation block
-(void)_layoutPlayerIconView;
-(void)_layoutDurationPillView;
-(float)_badgeLeftOffset;
-(id)initWithMediaPreviewInsets:(UIEdgeInsets)arg1 isOutgoingMessage:(char)arg2 ;
-(UIEdgeInsets)mediaPreviewInsets;
-(char)isOutgoingMessage;
@end

