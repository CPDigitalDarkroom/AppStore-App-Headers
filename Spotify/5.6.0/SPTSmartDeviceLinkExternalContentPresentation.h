/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPTSmartDeviceLinkExternalContentPresentation : NSObject
-(void)presentContentItems:(id)arg1 identifier:(id)arg2 parent:(id)arg3 usingSmartDeviceLink:(id)arg4 withVoice:(char)arg5 allowHierarchy:(char)arg6 textPrompt:(id)arg7 voicePrompt:(id)arg8 chosenItemCallback:(/*^block*/id)arg9 ;
-(id)filteredContentItems:(id)arg1 ;
-(void)showInteractionMenu:(id)arg1 usingSmartDeviceLink:(id)arg2 withVoice:(char)arg3 withCancelTempText:(/*^block*/id)arg4 ;
-(void)createAndShowInteractionMenu:(id)arg1 identifier:(id)arg2 parent:(id)arg3 usingSmartDeviceLink:(id)arg4 withVoice:(char)arg5 allowHierarchy:(char)arg6 textPrompt:(id)arg7 voicePrompt:(id)arg8 withCancelTempText:(/*^block*/id)arg9 chosenItemCallback:(/*^block*/id)arg10 ;
-(void)presentContentItem:(id)arg1 usingSmartDeviceLink:(id)arg2 withVoice:(char)arg3 allowHierarchy:(char)arg4 textPrompt:(id)arg5 voicePrompt:(id)arg6 chosenItemCallback:(/*^block*/id)arg7 ;
@end

