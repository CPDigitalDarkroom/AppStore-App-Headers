/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageCollectionViewCellDelegate <NSObject>
@required
-(char)messageCell:(id)arg1 shouldDisplayMessageAsGift:(id)arg2;
-(void)messageCell:(id)arg1 didUnwrapGiftMessageRow:(id)arg2;
-(void)messageCell:(id)arg1 didRevealContentsOfGiftMessageRow:(id)arg2;
-(void)messageCell:(id)arg1 didSelectMessage:(id)arg2;
-(void)messageCellDidTapAttribution:(id)arg1;
-(void)messageCell:(id)arg1 didSelectMenuForWebURL:(id)arg2 sourceRect:(CGRect)arg3;
-(char)messageCell:(id)arg1 canSaveMessage:(id)arg2;
-(void)messageCell:(id)arg1 didSelectSaveMessage:(id)arg2;
-(void)messageCell:(id)arg1 willDisplayPhotoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 didEndDisplayPhotoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 didUpdatePhotoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 mayOpenVideoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 willOpenVideoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 didOpenVideoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 mayCloseVideoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 willCloseVideoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 didCloseVideoViewNode:(id)arg2;
-(void)messageCell:(id)arg1 didSelectShareText:(id)arg2 withDeepLinkURL:(id)arg3 withAttribution:(id)arg4;
-(void)messageCellView:(id)arg1 didSelectURL:(id)arg2;
-(void)messageCellView:(id)arg1 didSelectDate:(id)arg2 forDateString:(id)arg3;
-(void)messageCellView:(id)arg1 didSelectPhoneNumber:(id)arg2;
-(void)messageCellView:(id)arg1 didSelectAddress:(id)arg2 withComponents:(id)arg3;
-(void)messageCell:(id)arg1 didSelectWaitingForNetwork:(id)arg2;
-(void)messageCell:(id)arg1 didSelectDeleteMessage:(id)arg2;
-(void)messageCell:(id)arg1 didSelectRetryMessage:(id)arg2;
-(void)messageCell:(id)arg1 didSelectCancelMessage:(id)arg2;
-(void)messageCell:(id)arg1 didSelectReportMessage:(id)arg2;
-(char)messageCell:(id)arg1 shouldShowContextMenuForMessage:(id)arg2;
-(void)messageCell:(id)arg1 didShowContextMenuForMessage:(id)arg2;
-(char)messageCell:(id)arg1 shouldShowForwardButtonOfType:(unsigned)arg2 message:(id)arg3;
-(void)messageCell:(id)arg1 didSelectForwardButtonType:(unsigned)arg2 message:(id)arg3;
-(char)messageCell:(id)arg1 shouldShowShareButtonOfType:(unsigned)arg2 message:(id)arg3;
-(void)messageCell:(id)arg1 didSelectShareMessage:(id)arg2;
-(void)messageCell:(id)arg1 didDisplayError:(id)arg2;
-(char)messageCell:(id)arg1 shouldAutoPlayAudio:(id)arg2;
-(char)messageCell:(id)arg1 shouldShowSaveButtonForMessage:(id)arg2;
-(void)messageCell:(id)arg1 didSelectSaveLinkForMessage:(id)arg2;
-(char)messageCell:(id)arg1 shouldAnimateSticker:(id)arg2;
-(char)messageCell:(id)arg1 shouldShowViewPackContextMenuForSticker:(id)arg2;
-(void)messageCell:(id)arg1 didSelectViewPackContextMenuForSticker:(id)arg2;
-(void)messageCell:(id)arg1 didSelectAttachment:(id)arg2;
-(char)messageCellShouldAutoplayVideo:(id)arg1;
-(id)modalPresentationStackManagerForMessageCell:(id)arg1;
-(void)messageCell:(id)arg1 didResizeContentView:(id)arg2;

@end

