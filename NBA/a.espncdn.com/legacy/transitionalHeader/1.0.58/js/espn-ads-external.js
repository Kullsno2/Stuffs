!function(window,document){window.googletag=window.googletag||{},window.googletag.cmd=window.googletag.cmd||[];var gads=document.createElement("script");gads.async=!0,gads.type="text/javascript",gads.src="../../../../../../../www.googletagservices.com/tag/js/gpt.js";var node=document.getElementsByTagName("script")[0];node.parentNode.insertBefore(gads,node)}(this,this.document),window.admgr=function($,window,document,undefined){function _init(config){if(config){self.config=config,self.startTime=Date.now(),self.loadTime=0;var network=config.network,level=config.level,sizeConfig=config.sizes,selector=config.selector||".ad-slot";self.independentLoaded=!1,defineBreakpoints(),network&&level&&sizeConfig&&(self.slots=[],self.additionalSlots=[],$(selector).not('[data-disabled="true"]').empty().each(function(){defineSlot(this)}),googletag.cmd.push(function(){var $slots=$(self.slots);self.gptadslots={},self.hasOutOfPageAdSlot=!1,self.hasCategoryExclusionAdSlot=!1,clearTargeting(),$slots.each(function(){defineGPTSlot(this,self.config)}),addTargeting(config),self.initialized!==!0&&(googletag.pubads().addEventListener("slotRenderEnded",function(event){var slots=self.gptadslots;for(var key in slots)if(slots.hasOwnProperty(key)&&slots[key]===event.slot){$.publish("ad.rendered",[key,event]);break}}),config.setCentering!==!1&&googletag.pubads().setCentering(!0),config.collapseEmptyDivs!==!1&&googletag.pubads().collapseEmptyDivs(!!config.collapseBeforeLoad),config.enableSingleRequest!==!1&&googletag.pubads().enableSingleRequest(),config.disableInitialLoad!==!0&&config.supportDynamicPageLoad!==!0||googletag.pubads().disableInitialLoad(),config.onSlotRenderEnded&&"function"==typeof config.onSlotRenderEnded&&googletag.pubads().addEventListener("slotRenderEnded",config.onSlotRenderEnded),googletag.enableServices(),self.initialized=!0),$slots.each(function(){googletag.display(this.id)}),config.supportDynamicPageLoad===!0&&config.disableInitialLoad!==!0&&(self.hasOutOfPageAdSlot===!0&&config.delayInPageAdSlots===!0?_refreshOutOfPageAdSlots():_refreshAll())}))}}function _registerSlot(el,config){el&&googletag.cmd.push(function(){var gptSlot,slot=defineSlot(el);slot&&(gptSlot=defineGPTSlot(slot,config),addTargeting(config),config.supportDynamicPageLoad===!0&&googletag.display(slot.id))})}function _initSlot(el,config,callback){el&&(self.independentLoaded=!1,googletag.cmd.push(function(){var id=el.id,arr=[],slot=el.isIndependent?el:defineSlot(el);if(callback&&"function"==typeof callback||(callback=function(){}),slot){untrackSlot(id),clearTargeting();var gptSlot=defineGPTSlot(slot,config);arr.push(gptSlot),addTargeting(config),googletag.pubads().updateCorrelator(),googletag.display(slot.id),config.supportDynamicPageLoad===!0&&config.disableInitialLoad!==!0&&_refresh(arr),self.config=config,callback(slot)}else callback(undefined)}))}function _refresh(arr){arr&&arr instanceof Array&&googletag.cmd.push(function(){googletag.pubads().refresh(arr)})}function _refreshAll(){var arr=getGPTArray({independent:!1});googletag.cmd.push(function(){googletag.pubads().refresh(arr)})}function _refreshOutOfPageAdSlots(){var arr=getGPTArray({outOfPage:!0});googletag.cmd.push(function(){googletag.pubads().refresh(arr)})}function _refreshInPageAdSlots(){var arr=getGPTArray({inPage:!0,independent:!1});googletag.cmd.push(function(){googletag.pubads().refresh(arr)})}function _refreshIndependentAdSlots(){self.additionalSlots.length>0&&($(self.additionalSlots).each(function(){_initSlot(this,self.config)}),self.independentLoaded=!0)}function _clear(){googletag.cmd.push(function(){if(self.disabledTypes&&self.disabledTypes.length>0){for(var gptObj,gptArr=getGPTArray(),arr=[],i=0,l=gptArr.length;i<l;i++)gptObj=gptArr[i],self.disabledTypes.indexOf(gptObj.type)===-1&&arr.push(gptObj);googletag.pubads().clear(arr)}else googletag.pubads().clear()})}function _debug(){window.console.log("version: "+self.version),window.console.log("network id: "+self.config.network),window.console.log("level: "+self.config.level),$(self.config.kvps).each(function(i){window.console.log("kvp "+(i+1)+": "+this.name+"="+this.value)}),window.console.log("selector: "+self.config.selector),window.console.log("current breakpoint: "+getCurrentBreakpoint()),$(self.slots).each(function(i){window.console.log("slot "+(i+1)+": "),window.console.log("\tid: "+this.id),window.console.log("\ttype: "+this.type),window.console.log("\tdefaultSize: "+this.defaultSize),window.console.log("\toutOfPage: "+this.isOutOfPage),window.console.log("\toutOfPage: "+this.isCatExclusion),$(this.mappings).each(function(){window.console.log("\tviewport: "+this.viewport+" -> "+this.slot.join(" "))}),$(this.kvps).each(function(i){window.console.log("\tkvp "+(i+1)+": "+this.name+"="+this.value)})})}function _updateKeyValue(key,value){if(self.config&&self.config.kvps){var found=!1;$(self.config.kvps).each(function(){if(this.name===key)return this.value=value,found=!0,!1}),found===!1&&self.config.kvps.push({name:key,value:value})}}function _removeKeyValue(key){if(self.config&&self.config.kvps)for(var i=self.config.kvps.length-1;i>=0;i--)self.config.kvps&&self.config.kvps[i].name===key&&self.config.kvps.splice(i,1)}function addTargeting(config){var kvps=config.kvps||[];config.dynamicKeyValues&&config.dynamicKeyValues.profile&&config.dynamicKeyValues.profile.key&&self.profiles&&self.profiles.currentProfile&&_updateKeyValue(config.dynamicKeyValues.profile.key,self.profiles.currentProfile),$(kvps).each(function(){this.name!==undefined&&this.value!==undefined&&(googletag.pubads().setTargeting(this.name,this.value),self.targetingKeys.push(this.name))})}function clearTargeting(){if(self.targetingKeys&&self.targetingKeys.length>0){for(var i=0,l=self.targetingKeys.length;i<l;i++)googletag.pubads().clearTargeting(self.targetingKeys[i]);self.targetingKeys=[]}}function defineSlot(el){if(el){var obj,shouldShow=shouldShowSlotForBreakpoint(el),type=el.getAttribute("data-slot-type"),slotKvps=getSlotKvps(el),id=getSlotId(type),slotConfig=self.config.sizes[type],mappings=slotConfig&&slotConfig.mappings,defaultSize=slotConfig&&slotConfig.defaultSize,isOutOfPage=!1,isCatExclusion=!1,isIndependent=!1,collapseBeforeLoad="true"===el.getAttribute("data-collapse-before-load");if("true"===el.getAttribute("data-out-of-page")&&(isOutOfPage=!0),"true"===el.getAttribute("data-category-exclusion")&&(isCatExclusion=!0),"true"===el.getAttribute("data-independent")&&(isIndependent=!0),shouldShow&&type&&slotConfig&&mappings&&defaultSize)return obj={id:id,type:type,defaultSize:defaultSize,mappings:mappings,kvps:slotKvps,isOutOfPage:isOutOfPage,collapseBeforeLoad:collapseBeforeLoad,isCatExclusion:isCatExclusion,isIndependent:isIndependent},isIndependent?self.additionalSlots[0]=obj:self.slots.push(obj),el.id=id,obj}}function defineGPTSlot(slot,config){var gptSlot,sizeMapping=getSizeMapping(slot.mappings),target="/"+config.network+"/"+config.level;return slot.isCatExclusion===!0?(gptSlot=googletag.defineSlot(target,slot.defaultSize,slot.id).addService(googletag.pubads()),self.hasCategoryExclusionAdSlot=!0):slot.isOutOfPage===!0?(gptSlot=googletag.defineOutOfPageSlot(target,slot.id).addService(googletag.pubads()).setTargeting("slotId",slot.id),self.hasOutOfPageAdSlot=!0):gptSlot=googletag.defineSlot(target,slot.defaultSize,slot.id).addService(googletag.pubads()).defineSizeMapping(sizeMapping),slot.collapseBeforeLoad===!0&&gptSlot.setCollapseEmptyDiv(!0,!0),slot.kvps&&slot.kvps.length>0&&$(slot.kvps).each(function(){this.name!==undefined&&this.value!==undefined&&gptSlot.setTargeting(this.name,this.value)}),gptSlot.type=slot.type,gptSlot.isOutOfPage=slot.isOutOfPage,gptSlot.isCatExclusion=slot.isCatExclusion,gptSlot.isIndependent=slot.isIndependent,self.gptadslots[slot.id]=gptSlot,gptSlot}function untrackSlot(slotId){for(var i=0,l=self.slots.length;i<l;i++)if(self.slots[i].id===slotId){self.slots.splice(i,1);break}self.gptadslots&&self.gptadslots[slotId]&&delete self.gptadslots[slotId]}function _handleResize(){var bp=getCurrentBreakpoint();bp!==self.profiles.currentProfile&&(self.profiles.currentProfile=bp,refreshForBreakpointChange())}function defineBreakpoints(){if(self.config.breakpoints){self.profiles={},self.profiles.widths={};var min,max;for(var profile in self.config.breakpoints)if(self.config.breakpoints.hasOwnProperty(profile)){var sizes=self.config.breakpoints[profile];if(2===sizes.length){if(min=parseInt(sizes[0],10),max=parseInt(sizes[1],10),!isNaN(min)&&!isNaN(max)&&min<max)for(var i=min;i<=max;i++)self.profiles.widths[i]=profile}else 1===sizes.length&&(max=parseInt(sizes[0],10),isNaN(max)||(self.profiles.maxProfile=profile,self.profiles.max=sizes[0]))}self.profiles.currentProfile=getCurrentBreakpoint(),self.config.refreshOnBreakpointChange===!0&&self.listeningForBreakpointChange!==!0&&($window.on("resize",_handleResize),self.listeningForBreakpointChange=!0)}}function _disableDynamicRefresh(types){types&&types instanceof Array&&types.length>0?(types.forEach(function(type){$('[data-slot-type="'+type+'"]').attr("data-disabled","true")}),self.disabledTypes=types):($window.off("resize",_handleResize),self.listeningForBreakpointChange=!1)}function getCurrentBreakpoint(){var w=$window.width();return w>=self.profiles.max?self.profiles.maxProfile:self.profiles.widths[w]}function refreshForBreakpointChange(){clearTimeout(self.timeoutHook),self.timeoutHook=setTimeout(function(){_clear(),_init(self.config)},250)}function getSlotId(type){return"ad-slot-"+type+"-"+Math.floor(999999*Math.random())}function getSlotKvps(div){var slotKvps=[];if(div){var dataKvps=div.getAttribute("data-slot-kvps");if(dataKvps){var pairs=dataKvps.split(",");pairs.length>0&&$(pairs).each(function(){var parts=this.split("=");2===parts.length&&slotKvps.push({name:parts[0],value:parts[1]})})}}return slotKvps}function getGPTArray(obj){var slot,slots=self.gptadslots||{},arr=[];obj||(obj={});for(var key in slots)if(slots.hasOwnProperty(key)){if(slot=slots[key],obj.independent===!1&&slot.isIndependent===!0)continue;obj.inPage===!0&&slot.isOutOfPage!==!0?arr.push(slot):obj.outOfPage!==!0||slot.isOutOfPage!==!0&&slot.isCatExclusion!==!0?obj.inPage!==!0&&obj.outOfPage!==!0&&arr.push(slot):arr.push(slot)}return arr}function getSizeMapping(mappings){var sizeMapping=googletag.sizeMapping();return $(mappings).each(function(){sizeMapping.addSize(this.viewport,this.slot)}),sizeMapping.build()}function shouldShowSlotForBreakpoint(slot){if(!slot||!self.profiles||!self.profiles.currentProfile)return!0;var include=slot.getAttribute("data-include-bp"),exclude=slot.getAttribute("data-exclude-bp"),shouldShow=!0;return include&&include.split(",").indexOf(self.profiles.currentProfile)===-1&&(shouldShow=!1),exclude&&exclude.split(",").indexOf(self.profiles.currentProfile)!==-1&&(shouldShow=!1),shouldShow}window.googletag=window.googletag||{},googletag.cmd=googletag.cmd||[];var self={},$window=$(window);return self.version="0.0.1",self.targetingKeys=[],{init:function(config){_init(config)},initSlot:function(el,config,callback){_initSlot(el,config,callback)},defineSlot:function(el){defineSlot(el)},untrackSlot:function(slotId){untrackSlot(slotId)},registerSlot:function(el,config){_registerSlot(el,config)},refresh:function(arr){_refresh(arr)},refreshAll:function(){_refreshAll()},refreshInPageAdSlots:function(){_refreshInPageAdSlots()},refreshIndependentAdSlots:function(){_refreshIndependentAdSlots()},refreshOutOfPageAdSlots:function(){_refreshOutOfPageAdSlots()},clear:function(){_clear()},debug:function(){_debug()},getVersion:function(){return self.version},getSlots:function(){return self.slots},getGPTSlots:function(){return self.gptadslots},getGPTArray:function(){return getGPTArray()},updateKeyValue:function(key,value){_updateKeyValue(key,value)},removeKeyValue:function(key){_removeKeyValue(key)},disableDynamicRefresh:function(types){_disableDynamicRefresh(types)},resetDisabledTypes:function(){self.disabledTypes=null},getStartTime:function(){return self.startTime},getLoadTime:function(){return self.loadTime},getIndependentLoaded:function(){return self.independentLoaded},setLoadTime:function(time){self.loadTime=time}}}(jQuery,this,this.document);var espn=espn||{};espn.ads=espn.ads||{},function($,window,document,undefined){espn.ads.defaultConfig={selector:".ad-slot",sizes:{sponsoredbylogoheader:{defaultSize:[150,45],mappings:[{viewport:[1024,0],slot:[[150,45]]}]},hublogo:{defaultSize:[150,38],mappings:[{viewport:[1024,0],slot:[[150,38]]}]},enhancedlogo:{defaultSize:[180,45],mappings:[{viewport:[1024,0],slot:[[180,45]]}]},presentedbylogo:{defaultSize:[200,45],mappings:[{viewport:[1024,0],slot:[[200,45]]}]},topicspresby:{defaultSize:[250,45],mappings:[{viewport:[1024,0],slot:[[250,45]]}]},presentedbylogo30for30:{defaultSize:[175,40],mappings:[{viewport:[1024,0],slot:[[175,40]]}]},sponsoredbylogo:{defaultSize:[200,45],mappings:[{viewport:[1024,0],slot:[[375,50],[200,45],[180,45],[150,45]]}]},sponsoredbylogo2:{defaultSize:[920,23],mappings:[{viewport:[1024,0],slot:[[920,23]]}]},sponsoredby2:{defaultSize:[150,45],mappings:[{viewport:[1024,0],slot:[[150,45],[200,35]]}]},pencil_marketing:{defaultSize:[924,51],mappings:[{viewport:[1024,0],slot:[[924,51]]}]},pencil_bottom:{defaultSize:[924,56],mappings:[{viewport:[1024,0],slot:[[924,56]]}]},longform_top_big:{defaultSize:[1280,250],mappings:[{viewport:[1280,0],slot:[[1280,250]]}]},longform_top:{defaultSize:[924,250],mappings:[{viewport:[1024,0],slot:[[924,250]]}]},incontent:{defaultSize:[300,250],mappings:[{viewport:[1024,0],slot:[[300,250],[300,600]]}]},wemlogo:{defaultSize:[115,45],mappings:[{viewport:[1024,0],slot:[[115,45]]}]},poster:{defaultSize:[160,600],mappings:[{viewport:[1024,0],slot:[[160,600]]}]},promobox:{defaultSize:[300,100],mappings:[{viewport:[1024,0],slot:[[300,100]]}]},"banner-unicast":{defaultSize:[400,40],mappings:[{viewport:[1024,0],slot:[[400,40]]}]},background_skin:{defaultSize:[1280,946],mappings:[{viewport:[1280,0],slot:[[1280,946],[200,800]]}]},iewebslice:{defaultSize:[300,50],mappings:[{viewport:[1024,0],slot:[[300,50]]}]},exclusions:{defaultSize:[1,2],mappings:[{viewport:[0,0],slot:[[1,2]]}]},testdc:{defaultSize:[1,1],mappings:[{viewport:[1024,0],slot:[[1,1]]}]},twittermodule_top:{defaultSize:[234,61],mappings:[{viewport:[1024,0],slot:[[234,61]]}]},mostpopularlogograntland:{defaultSize:[145,50],mappings:[{viewport:[1024,0],slot:[[145,50]]}]},homepagepoll:{defaultSize:[298,50],mappings:[{viewport:[1024,0],slot:[[298,50]]}]},blog_module:{defaultSize:[615,50],mappings:[{viewport:[1024,0],slot:[[615,50]]}]},presentedbylogopollpopup:{defaultSize:[263,99],mappings:[{viewport:[1024,0],slot:[[263,99]]}]},presentedbylogopodcastarchive:{defaultSize:[375,50],mappings:[{viewport:[1024,0],slot:[[375,50]]}]},presentedbylogogamecast:{defaultSize:[200,35],mappings:[{viewport:[1024,0],slot:[[200,35]]}]},presentedbylogogamehq:{defaultSize:[884,40],mappings:[{viewport:[1024,0],slot:[[884,40]]}]},module_logo:{defaultSize:[298,80],mappings:[{viewport:[1024,0],slot:[[298,80]]}]},module_logo_bottom:{defaultSize:[298,30],mappings:[{viewport:[1024,0],slot:[[298,30]]}]},motionlogo:{defaultSize:[175,20],mappings:[{viewport:[1024,0],slot:[[175,20]]}]},presentedbylogo2:{defaultSize:[148,68],mappings:[{viewport:[1024,0],slot:[[148,68]]}]},introinterstitial:{defaultSize:[720,480],mappings:[{viewport:[1024,0],slot:[[720,480]]}]},vps_logo:{defaultSize:[298,80],mappings:[{viewport:[1024,0],slot:[[298,80]]}]},blogheader:{defaultSize:[640,147],mappings:[{viewport:[1024,0],slot:[[640,147]]}]},sponsoredbylogograntland:{defaultSize:[200,24],mappings:[{viewport:[1024,0],slot:[[200,24]]}]},countdownclock:{defaultSize:[250,50],mappings:[{viewport:[1024,0],slot:[[250,50]]}]},conversationbanner:{defaultSize:[576,50],mappings:[{viewport:[1024,0],slot:[[576,50]]}]},pastwinners:{defaultSize:[924,51],mappings:[{viewport:[1024,0],slot:[[924,51]]}]},vote:{defaultSize:[300,251],mappings:[{viewport:[1024,0],slot:[[300,251]]}]},videooverlaywallpaper:{defaultSize:[1280,400],mappings:[{viewport:[1280,0],slot:[[1280,400]]}]},topicsoverlaywallpaper:{defaultSize:[1320,660],mappings:[{viewport:[1280,0],slot:[[1320,660]]}]},topicsbottom:{defaultSize:[923,49],mappings:[{viewport:[0,0],slot:[[923,49]]}]},nflnationlogo:{defaultSize:[186,20],mappings:[{viewport:[1024,0],slot:[[186,20]]}]},halfpage:{defaultSize:[300,600],mappings:[{viewport:[1024,0],slot:[[300,600]]}]},banner:{defaultSize:[728,90],mappings:[{viewport:[1024,0],slot:[[728,90],[970,66],[924,50]]}]},pencil_top:{defaultSize:[728,90],mappings:[{viewport:[1024,0],slot:[[728,90],[970,66],[924,50]]}]},uap_banner:{defaultSize:[728,90],mappings:[{viewport:[1280,0],slot:[[1280,100]]},{viewport:[1024,0],slot:[[970,66],[970,250]]},{viewport:[768,0],slot:[[728,90]]},{viewport:[0,0],slot:[[320,50]]}]},jayski_banner:{defaultSize:[728,90],mappings:[{viewport:[1280,0],slot:[[728,90]]}]},overlay:{defaultSize:[1,1],mappings:[{viewport:[0,0],slot:[[1,1]]}]},photo_banner:{defaultSize:[1024,66],mappings:[{viewport:[1024,0],slot:[[1024,66]]}]},introcard:{defaultSize:[970,250],mappings:[{viewport:[1024,0],slot:[[970,250]]}]},endcard:{defaultSize:[970,250],mappings:[{viewport:[1024,0],slot:[[970,250]]}]},gc_banner:{defaultSize:[728,90],mappings:[{viewport:[1024,0],slot:[[728,90]]}]},"gamebreak-popup":{defaultSize:[300,250],mappings:[{viewport:[1024,0],slot:[[300,250]]}]},presentingsponsor2:{defaultSize:[150,45],mappings:[{viewport:[1024,0],slot:[[150,45]]}]},presentingsponsor1:{defaultSize:[180,45],mappings:[{viewport:[1024,0],slot:[[180,45]]}]},error_banner:{defaultSize:[760,510],mappings:[{viewport:[1024,0],slot:[[760,510]]}]}},delayInPageAdSlots:!0,refreshOnBreakpointChange:!1,network:"6444",supportDynamicPageLoad:!0,dynamicKeyValues:{profile:{key:"prof"}},incontentPositions:{defaults:{now:4,news:4,favorites:-1},index:{nfl:{},top:{favorites:-1}}},disabled:!1,breakpoints:{xl:[1280],l:[1024,1279],m:[768,1023],s:[0,767]}},espn.ads.init=function(opts){var callback=opts&&opts.cb||$.noop;$.isReady?callback.call():$(document).ready(function(){callback.call()})}}(jQuery,this,this.document);var espn=espn||{};espn.ads=espn.ads||{},espn.ads.rendered=espn.ads.rendered||{},espn.ads.refreshedSlots=espn.ads.refreshedSlots||[],function($,window,document,undefined){function getReferrer(ref){ref||(ref=document.referrer);var referrer,_referrers={"facebook.com":"facebook","twitter.com":"twitter","t.co":"twitter","plus.google.com":"googleplus","plus.url.google.com":"googleplus","google.*":"google","bing.com":"bing","yahoo.com":"yahoo","m.espn.com":"espn","espn.com":"espn","espndeportes.espn.com":"espndeportes","espn.com.mx":"espndeportes","espn.com.co":"espndeportes","espn.com.ar":"espndeportes","espn.com.ve":"espndeportes","instagram.com":"instagram","reddit.com":"reddit","bleacherreport.com":"bleacherreport","tumblr.com":"tumblr","t.umblr.com":"tumblr"};if(ref)for(var r in _referrers)if(_referrers.hasOwnProperty(r)&&ref.match(new RegExp("^https?:\\/\\/(?:(?:[a-zA-Z0-9]+\\.)+)?"+r.replace(/\./g,"\\.").replace(/\*/g,".*")+"(?:$|\\/$|\\/.*|\\?.*)","i"))){referrer=_referrers[r];break}return referrer}function getSegmentsArray(){var arr=[],c=$.cookie("CRBLM");if(c){c=c.substring(9);for(var index=0,value=0,count=0,key="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",i=0,n=c.length,nn=n-n%4;i<nn;){var enc1=key.indexOf(c.charAt(i++)),enc2=key.indexOf(c.charAt(i++));if(value|=(enc1<<2|enc2>>4)<<(index++?0:8),2===index&&value&&(arr.push(value),12===++count))break;value*=(index%=6)&&index-2?1:0;var enc3=key.indexOf(c.charAt(i++));if(64!==enc3){if(value|=((15&enc2)<<4|enc3>>2)<<(index++?0:8),2===index&&value&&(arr.push(value),12===++count))break;value*=(index%=6)&&index-2?1:0}var enc4=key.indexOf(c.charAt(i++));if(64!==enc4){if(value|=((3&enc3)<<6|enc4)<<(index++?0:8),2===index&&value&&(arr.push(value),12===++count))break;value*=(index%=6)&&index-2?1:0}}}return arr}function getBase(lang,region){var base=espn.ads.configBaseURL||"espn.us.com",baseMap={us:"espn.dep",mx:"espn.latam.mx",co:"espn.latam.co",ar:"espn.latam.ar",ve:"espn.latam.ve"};return"es"===lang&&(base=baseMap[region]),base}function getProp(key,propValue,defaultValue){var ret=propValue||defaultValue,kvps=window.ad_kvps||"",patt=new RegExp("(?="+key+"=([A-Za-z0-9/]+);)"),arr=patt.exec(kvps);return propValue||""===kvps||null===arr||(ret=arr.join("").trim()),ret}function getLevel(adSite,pageType){var site=window.ad_site&&""!==window.ad_site?window.ad_site:adSite,zone=window.ad_zone&&""!==window.ad_zone?window.ad_zone:pageType;return site+"/"+zone}function getGlobalKvps(arr){var i,kvps=arr||[],data=window.ad_kvps||"",keys=data.split(";"),len=keys.length;if(len>0)for(i=0;i<len;i++){var item=keys[i],pairs=item.split("=");if(""!==item&&pairs.length>1){var key=pairs[0],value=pairs[1];/^(ed|lang|sp|pgtyp|seg|swid|mnr|ref)$/.test(key)||kvps.push({name:key,value:value})}}return kvps}function _initConfig(config){config||(config={});var kvps=[],region=getProp("ed",espn.i18n&&espn.i18n.country,"us"),lang=getProp("lang",espn.i18n&&espn.i18n.lang,"en"),sp=window.ad_sp||"espn",pgtyp=window.ad_pgtyp||"index",base=getBase(lang,region);espn.ads.isMobile&&pgtyp.indexOf("gamecast")!==-1&&"en"!==lang&&(base="m.espn.deportes.com");var level=getLevel(base+"."+sp,pgtyp);return kvps.push({name:"ed",value:region}),kvps.push({name:"lang",value:lang}),kvps.push({name:"sp",value:sp}),kvps.push({name:"pgtyp",value:pgtyp}),config.base=base,config.level=level,config.kvps=kvps,config}function _extendConfig(config){return config||(config={}),window.ad_breakpointRefresh&&(config.refreshOnBreakpointChange=window.ad_breakpointRefresh),config=_extendKvps(config),window.ad_sizes&&!$.isEmptyObject(window.ad_sizes)&&(config.sizes=window.ad_sizes),_extendKvps(config)}function _extendKvps(config){config=config||{};var kvps=config.kvps||[],segments=window.ad_seg&&""!==window.ad_seg?window.ad_seg:null;segments=segments||espn.core&&espn.core.ad_segments&&espn.core.ad_segments()||getSegmentsArray(),segments&&segments.length>0&&kvps.push({name:"seg",value:segments});var swid=espn.core&&espn.core.SWID||$.cookie("SWID");swid&&kvps.push({name:"swid",value:swid});var mnr="f";document.cookie.indexOf("grif=1")>-1&&(mnr="t"),kvps.push({name:"mnr",value:mnr});var ref=getReferrer();ref&&kvps.push({name:"ref",value:ref});var lab=$.cookie("labadv");return lab&&kvps.push({name:"pgtyp",value:lab}),kvps=getGlobalKvps(kvps),config.kvps=kvps,config}function _initAds(){espn.ads.adsInitted||(espn.ads.adsInitted=!0,admgr.init(espn.ads.config))}var adRenderedCount=0;$(".ad-slot").removeAttr("data-disabled").empty(),admgr.resetDisabledTypes(),$.subscribe("ad.rendered",function(key,event){espn.ads.rendered[key]=event;var refreshedSlot=espn.ads.refreshedSlots.indexOf(key);if(refreshedSlot>-1){var $els=$(".ad-slot-incontent");$els.length>0&&$els.each(function(index,el){var $ad=$(el).closest(".mod-container");$ad.hasClass("dimensions")&&$ad.removeClass("dimensions").css({width:"auto",height:"auto"}),espn.ads.refreshedSlots.splice(refreshedSlot,1)})}"overlay"===event.slot.type&&event.isEmpty===!0&&espn.ads.config.delayInPageAdSlots===!0&&admgr.refreshInPageAdSlots();var iFrameAds=$("#"+key).find(" > iframe");if(iFrameAds.length>0){var iFrame=iFrameAds[0];$(iFrame).load(function(){adRenderedCount++,adRenderedCount===admgr.getSlots().length&&admgr.setLoadTime(Date.now()-admgr.getStartTime())})}else adRenderedCount++}),$.subscribe("ad.overlay.close",function(){espn.ads.config.delayInPageAdSlots===!0&&admgr.refreshInPageAdSlots()});var config=espn.ads.defaultConfig||{};config=_initConfig(config),config=_extendConfig(config),espn.ads.config=config,espn.ads.init({cb:_initAds})}(jQuery,this,this.document);